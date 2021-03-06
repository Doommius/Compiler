/**
 * @brief 
 * 
 * @file setup.c
 * @author Morten Jæger
 * @date 2018-03-09
 */

#include <stdio.h>
#include <stdlib.h>
#include "setup.h"
#include "symbol.h"
#include "memory.h"
#include "error.h"

/**
 * 
 * TODO All of this can possibly be put in the "tree.c", when we create a node. 
 * This means that we do not have to run through the AST again to set up the symbol table
 * 
 */

void setup_body(body *body, symbol_table *table) {

	body->table = table;

	setup_dlist(body->d_list, table);

	setup_slist(body->s_list, table);
}

void setup_function(function *function, symbol_table *table) {

	symbol_table *nextTable;
	nextTable = scope_symbol_table(table);
	function->table = nextTable;
	function->tail->table = nextTable;
	setup_head(function->head, nextTable, table);
	setup_body(function->body, nextTable);

	SYMBOL *s;
	s = get_symbol(table, function->head->id);
	if (s == NULL || s->stype->type != symbol_FUNCTION) {
		print_error("Function does not exist", 0, function->lineno);
	}
	s->stype->val.func_type.func = function;
}

void setup_head(head *head, symbol_table *table, symbol_table *outer_scope) {

	head->table = table;
	symbol_type *st;
	st = NEW(symbol_type);
	st->type = symbol_FUNCTION;
	put_symbol(outer_scope, head->id, 0, st);
	head->args = setup_pdl(head->list, table);
	head->stype = st;

	setup_type(head->type, outer_scope);
	st->val.func_type.pdl = head->list;
}

void setup_type(type *type, symbol_table *table) {
	type->table = table;
	symbol_type *st;

	st = NEW(symbol_type);

	switch (type->kind) {

	case (type_ID):
		st->type = symbol_ID;
		type->stype = st;
		break;

	case (type_INT):
		st->type = symbol_INT;
		type->stype = st;
		break;

	case (type_BOOl):
		st->type = symbol_BOOL;
		type->stype = st;
		break;

	case (type_ARRAY):
		st->type = symbol_ARRAY;
		type->stype = st;
		setup_type(type->val.type, table);
		break;

	case (type_RECORD):
		st->type = symbol_RECORD;
		type->stype = st;
		setup_vdl(type->val.list, scope_symbol_table(table), 1);
		break;
	}
}

int setup_pdl(par_decl_list *pdl, symbol_table *table) {
	pdl->table = table;
	int args;
	args = 0;
	if (pdl->kind != pdl_EMPTY) {
		args = args + setup_vdl(pdl->list, table, 0);
	}
	return args;
}

int setup_vdl(var_decl_list *vdl, symbol_table *table, int record) {

	vdl->table = table;
	int args;
	args = 1;
	setup_vtype(vdl->vartype, table);
	if (vdl->kind == vdl_LIST) {
		args = args + setup_vdl(vdl->list, table, 0);
	}
	if (record) {
		create_offset(table);
	}
	return args;
}

void setup_vtype(var_type *vtype, symbol_table *table) {

	vtype->table = table;
	symbol_type *st;
	st = NEW(symbol_type);
	st->type = symbol_UNKNOWN;

	SYMBOL *s;
	s = put_symbol(table, vtype->id, 0, st);
	vtype->symbol = s;

	setup_type(vtype->type, table);
}

void setup_dlist(decl_list *dlist, symbol_table *table) {

	dlist->table = table;
	if (dlist->kind != dl_EMPTY) {
		setup_decl(dlist->decl, table);
		setup_dlist(dlist->list, table);
	}
}

void setup_decl(declaration *decl, symbol_table *table) {

	decl->table = table;

	symbol_type *st;
	switch (decl->kind) {

	case (decl_TYPE):
		st = NEW(symbol_type);
		st->type = symbol_ID;
		put_symbol(table, decl->val.type.id, 0, st);
		setup_type(decl->val.type.type, table);
		st->val.id_type = decl->val.type.type;
		break;

	case (decl_FUNC):
		setup_function(decl->val.function, table);
		break;

	case (decl_VAR):
		setup_vdl(decl->val.list, table, 0);
		break;
	}
}

void setup_slist(statement_list *slist, symbol_table *table) {

	slist->table = table;
	setup_stmt(slist->statement, table);
	if (slist->list != NULL) {
		setup_slist(slist->list, table);
	}
}

void setup_stmt(statement *stmt, symbol_table *table) {

	stmt->table = table;
	switch (stmt->kind) {

	case (statement_RETURN):
		setup_exp(stmt->val.ret, table);
		break;

	case (statement_WRITE):
		setup_exp(stmt->val.wrt, table);
		break;

	case (statement_ALLOCATE):
		setup_var(stmt->val.allocate.variable, table);
		break;

	case (statement_ALLOCATE_LENGTH):
		setup_var(stmt->val.allocate.variable, table);
		setup_exp(stmt->val.allocate.length, table);
		break;

	case (statement_ASSIGNMENT):
		setup_var(stmt->val.assignment.variable, table);
		setup_exp(stmt->val.assignment.expression, table);
		break;

	case (statement_IF):
		setup_exp(stmt->val.ifthen.expression, table);
		setup_stmt(stmt->val.ifthen.statement1, table);
		break;

	case (statement_IF_ELSE):
		setup_exp(stmt->val.ifthen.expression, table);
		setup_stmt(stmt->val.ifthen.statement1, table);
		setup_stmt(stmt->val.ifthen.statement2, table);
		break;

	case (statement_WHILE):
		setup_exp(stmt->val.w_loop.expression, table);
		setup_stmt(stmt->val.w_loop.statement, table);
		break;

	case (statement_FOR):
		setup_stmt(stmt->val.f_loop.assign, table);
		setup_exp(stmt->val.f_loop.cond, table);
		setup_stmt(stmt->val.f_loop.iter, table);
		setup_stmt(stmt->val.f_loop.body, table);
		break;

	case (statement_LIST):
		setup_slist(stmt->val.list, table);
		break;
	}
}

void setup_var(variable *var, symbol_table *table) {

	var->table = table;

	switch (var->kind) {

	case (var_ID):
		break;

	case (var_EXP):
		setup_var(var->val.exp.var, table);
		setup_exp(var->val.exp.exp, table);
		break;

	case (var_RECORD):
		setup_var(var->val.record.var, table);
		break;
	}
}

void setup_exp(expression *exp, symbol_table *table) {

	exp->table = table;
	if (exp->kind == exp_TERM) {
		setup_term(exp->val.term, table);
	} else {
		setup_exp(exp->val.ops.left, table);
		setup_exp(exp->val.ops.right, table);
	}
}

void setup_term(term *term, symbol_table *table) {

	term->table = table;
	switch (term->kind) {

	case (term_VAR):
		setup_var(term->val.variable, table);
		break;

	case (term_LIST):
		setup_alist(term->val.list.list, table);
		break;

	case (term_PAR):
		setup_exp(term->val.expression, table);
		break;

	case (term_NOT):
		setup_term(term->val.term_not, table);
		break;

	case (term_ABS):
		setup_exp(term->val.expression, table);
		break;

	default:
		break;
	}
}

void setup_alist(act_list *alist, symbol_table *table) {

	alist->table = table;
	if (alist->kind == al_LIST) {
		setup_elist(alist->list, table);
	}
}

void setup_elist(exp_list *elist, symbol_table *table) {
	elist->table = table;

	switch (elist->kind) {

	case (el_EXP):
		setup_exp(elist->expression, table);
		break;

	case (el_LIST):
		setup_exp(elist->expression, table);
		setup_elist(elist->list, table);
		break;
	}
}