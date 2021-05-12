#include "monty.h"

int line_count;
/**
 * pop - removes the top element
 * @stack: the stack
 * @param: the parameter
 */

void pop(stack_t **stack, __attribute__((unused))unsigned int param)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_count);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	(*stack) = (*stack)->next;
	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
		free(temp);
	}
}
