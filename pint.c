#include "monty.h"

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
		printf("%d: can't pint, stack empty\n", param);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	printf("%d\n", temp->n);
}
