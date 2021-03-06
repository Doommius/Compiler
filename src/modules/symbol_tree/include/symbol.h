#ifndef __symbol_h
#define __symbol_h

#include "tree.h"
#include "linked_list.h"

#define HashSize 317
/* SYMBOL will be extended later.
Function calls will take more parameters later.
*/

typedef enum { symbol_ID,
               symbol_INT,
               symbol_BOOL,
               symbol_RECORD,
               symbol_ARRAY,
               symbol_NULL,
               symbol_FUNCTION,
               symbol_UNKNOWN } SYMBOL_type;

typedef struct SYMBOL {
    char *name;
    int value;
    struct SYMBOL *next;
    struct symbol_type *stype;
    struct asm_op *op;
    int offset;
    int is_on_stack;
} SYMBOL;

typedef struct symbol_table {
    SYMBOL *table[HashSize];
    struct symbol_table *next;
} symbol_table;


typedef struct symbol_type {
    SYMBOL_type type;
    union {
        struct type *array_type;
        struct var_decl_list *record_type;
        struct type *id_type;
        struct {
            struct type *ret_type;
            struct par_decl_list *pdl;
            struct function *func;
        } func_type;
    } val;
    int printed;
} symbol_type;

int hash(char *str);

struct symbol_table *init_symbol_table();

struct symbol_table *scope_symbol_table(symbol_table *t);

SYMBOL *put_symbol(symbol_table *t, char *name, int value, symbol_type *st);

SYMBOL *get_symbol(symbol_table *t, char *name);

void dump_symbol_table(symbol_table *t);

SYMBOL *check_local(symbol_table *t, char *name);

void print_symbol(SYMBOL *symbol);

int get_symbol_depth(symbol_table *t, char *name);

//Returns size of symboltable - used when allocating memory for records
int table_size(symbol_table *t);

//Adds a offset to the symbols in the symmbol table - used in records
void create_offset(symbol_table *t);

#endif