#ifndef MONTY_HEADER
#define MONTY_HEADER
#include <ctype.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct shared_data_s - monty shared data
 * @stack: pointer to the stack
 * @line_content: line content
 * @nb_line: instruction line number
 * @opcode: instruction code
 * @arg: instruction argument
 * @file: bytecode instruction file
 * Description: carries shared data across the program
 */
typedef struct shared_data_s
{
	stack_t *stack;
	char *line_content;
	int nb_line;
	char *opcode;
	char *arg;
	FILE *file;
} shared_data_t;
extern shared_data_t sd; /* extern global variable */


/* processing functions */
void process_instruction(void);
void call_instruction_handler(char *opcode, char *arg);

/* opcode handlers */
void push_func(stack_t **stack, unsigned int line_number);
void pall_func(stack_t **stack, unsigned int line_number);
void pint_func(stack_t **stack, unsigned int line_number);
void pop_func(stack_t **stack, unsigned int line_number);
void swap_func(stack_t **stack, unsigned int line_number);
void add_func(stack_t **stack, unsigned int line_number);
void nop_func(stack_t **stack, unsigned int line_number);
void sub_func(stack_t **stack, unsigned int line_number);
void div_func(stack_t **stack, unsigned int line_number);
void mul_func(stack_t **stack, unsigned int line_number);
void mod_func(stack_t **stack, unsigned int line_number);
void pchar_func(stack_t **stack, unsigned int line_number);
void pstr_func(stack_t **stack, unsigned int line_number);

/* stack operations */
void push_stack(stack_t **head, int value);


/* helper functions */
int is_numeric(const char *str);

/* cleanup functions */
void free_stack(stack_t *head);

/* shared_data struct intializer */
#define SHARED_DATA_INIT { NULL, NULL, 0, NULL, NULL, NULL }
#endif

