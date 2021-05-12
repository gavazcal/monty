#include "monty.h"
int line_count;
/**
 * pint - prints the top value of the stack
 * @stack: the stack
 * @param: the parameter
 */

void pint(stack_t **stack, __attribute__((unused))unsigned int param)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		dprintf(2, "%d: can't pint, stack empty\n", line_count);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	printf("%d\n", temp->n);
}
