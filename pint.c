#include "monty.h"
char *param;
/**
 * pint - prints the top value of the stack
 * @stack: the stack
 * @line_count: line counter
 */

void pint(stack_t **stack, unsigned int line_count)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_count);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	printf("%d\n", temp->n);
}
