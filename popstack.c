#include "monty.h"
char *param;
/**
 * op_pop - removes the top element
 * @stack: the stack
 * @line_count: line counter
 */

void op_pop(stack_t **stack, unsigned int line_count)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_count);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
}
