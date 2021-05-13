#ifndef MONTY_H
#define MONTY_H
/*LIBRARIES*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern char *param;

/*STRUCTS*/
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*PLACEHOLDER FOR FUNCTION PROTOTYPES*/
void executions(char *opcode, stack_t **stack, unsigned int line_count);
void push(stack_t **stack, unsigned int line_count);
void pall(stack_t **stack, __attribute__((unused))unsigned int line_count);
void pint(stack_t **stack, unsigned int line_count);
void op_pop(stack_t **stack, unsigned int line_count);
void nop(stack_t **stack, unsigned int line_count);
void swap(stack_t **stack, unsigned int line_count);
void add(stack_t **stack, unsigned int line_count);
void sub(stack_t **stack, unsigned int line_count);
void mul(stack_t **stack, unsigned int line_count);
void mod(stack_t **stack, unsigned int line_count);
void div_ision(stack_t **stack, unsigned int line_count);
unsigned int count(stack_t *stack);
void close_file(int status, void *line);
void free_stack(int status, void *line);
void free_line(int status, void *line);

#endif
