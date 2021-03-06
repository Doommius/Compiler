#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "print_asm.h"
#include "code.h"

FILE *out;

int stdout_asm(a_asm *head) {
	out = stdout;
	create_asm(head);

	return 1;
}

int print_asm(a_asm *head, char *file) {

	out = fopen(file, "w");
	if (out == NULL) {
		fprintf(stderr, "Error writing to file: %d\n", file);
		exit(0);
	}

	create_asm(head);

	fclose(out);

	return 1;
}

void create_asm(a_asm *head) {

	char mem[24];
	sprintf(mem, "MEM, %d", memSize);

	//TODO Insert check to see what labels we actually use, instead of including everything
	create_label(".wrt_INT", "Integer write label");
	create_ins(".string", "\"%d\\n\"", "String used for printing integers");
	create_label(".wrt_TRUE", "TRUE write label");
	create_ins(".string", "\"TRUE\\n\"", "String used to print TRUE");
	create_label(".wrt_FALSE", "FALSE write label");
	create_ins(".string", "\"FALSE\\n\"", "String used for printing FALSE");

	create_ins(".comm", mem, "Available memory");

	fprintf(out, ".globl main\n");
	while (head != NULL) {
		switch (head->ins) {

		case (MOVQ):
			create_2_op("movq", head->val.two_op.op1, head->val.two_op.op2, head->comment);
			break;

		case (ADDQ):
			create_2_op("addq", head->val.two_op.op1, head->val.two_op.op2, head->comment);
			break;

		case (CALL):
			create_1_op("call", head->val.one_op.op, head->comment);
			break;

		case (PUSH):
			create_1_op("push", head->val.one_op.op, head->comment);
			break;

		case (POP):
			create_1_op("pop", head->val.one_op.op, head->comment);
			break;

		case (RET):
			create_ins("ret", "", head->comment);
			fprintf(out, "\n");
			break;

		case (LABEL):
			create_label(head->val.label.label_id, head->comment);
			break;

		case (CMP):
			create_2_op("cmp", head->val.two_op.op1, head->val.two_op.op2, head->comment);
			break;

		case (JMP):
			create_1_op("jmp", head->val.one_op.op, head->comment);
			break;

		case (JNE):
			create_1_op("jne", head->val.one_op.op, head->comment);
			break;

		case (JE):
			create_1_op("je", head->val.one_op.op, head->comment);
			break;

		case (JG):
			create_1_op("jg", head->val.one_op.op, head->comment);
			break;

		case (JL):
			create_1_op("jl", head->val.one_op.op, head->comment);
			break;

		case (JGE):
			create_1_op("jge", head->val.one_op.op, head->comment);
			break;

		case (JLE):
			create_1_op("jle", head->val.one_op.op, head->comment);
			break;

		case (IMUL):
			create_1_op("imul", head->val.one_op.op, head->comment);
			break;

		case (IDIV):
			create_1_op("idiv", head->val.one_op.op, head->comment);
			break;

		case (SUBQ):
			create_2_op("subq", head->val.two_op.op1, head->val.two_op.op2, head->comment);
			break;

		case (XORQ):
			create_2_op("xorq", head->val.two_op.op1, head->val.two_op.op2, head->comment);
			break;

		case (SARQ):
			create_2_op("sarq", head->val.two_op.op1, head->val.two_op.op2, head->comment);
			break;

		case (CDQ):
			create_ins("cdq", "", head->comment);
			break;
		case (LEAQ):
			create_2_op("leaq", head->val.two_op.op1, head->val.two_op.op2, head->comment);
			break;

		case (ANDQ):
			create_2_op("andq", head->val.two_op.op1, head->val.two_op.op2, head->comment);
			break;

		case (SYSCALL):
			create_ins("syscall", "", head->comment);
			fprintf(out, "\n");
			break;

		case (INT_):
			create_1_op("int", head->val.one_op.op, head->comment);
			fprintf(out, "\n");
			break;
		}

		head = head->next;
	}
}

void create_ins(char *type, char *args, char *comment) {
	int i;
	i = fprintf(out, "    %s %s", type, args);
	create_comment(comment, i);
}

void create_label(char *label, char *comment) {
	int i;

	i = fprintf(out, "%s:", label);
	create_comment(comment, i);
}

void create_comment(char *comment, int offset) {

	while (offset < 30) {
		fprintf(out, " ");
		offset++;
	}
	fprintf(out, "# %s\n", comment);
}

void create_1_op(char *ins, asm_op *op, char *comment) {
	char op_text[20];
	get_opt(op, op_text);
	create_ins(ins, op_text, comment);
}

void create_2_op(char *ins, asm_op *op1, asm_op *op2, char *comment) {

	char ops[60];
	char op1_text[20];
	char op2_text[20];

	get_opt(op1, op1_text);
	get_opt(op2, op2_text);

	sprintf(ops, "%s, %s", op1_text, op2_text);
	create_ins(ins, ops, comment);
}

void get_opt(asm_op *op, char *dest) {
	char reg[20];
	switch (op->type) {

	case (op_CONST):
		sprintf(dest, "$%s", op->val.const_id);
		break;

	case (op_INTCONST):
		sprintf(dest, "$%i", op->val.intconst);
		break;

	case (op_LABEL):
		sprintf(dest, "%s", op->val.label_id);
		break;

	case (op_REGISTER):
		sprintf(dest, "%%%s", op->val.reg_id);
		break;

	case (op_TEMP):
		sprintf(dest, "t%i", op->val.temp.id);
		break;

	case (op_SPILL):
		sprintf(dest, "%d(%%rbp)", op->stack_offset * -8 + 8);
		break;

	case (op_STACK_LOC):
		get_opt(op->val.stack.reg, reg);
		sprintf(dest, "%d(%s)", -8 * op->val.stack.offset, reg);
		break;

	case (op_MEM_LOC):
		get_opt(op->val.mem_index_reg, reg);
		sprintf(dest, "MEM(,%s,8)", reg);
		break;

	case (op_LEA):
		get_opt(op->val.lea.reg, reg);
		sprintf(dest, "%d(%s)", op->val.lea.offset, reg);
		break;
	}
}
