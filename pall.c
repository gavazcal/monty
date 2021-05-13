#include "monty.h"

/**
 * pall - prints the entire stack
 * @stack: the stack
 * @line_count: line counter
 */
void pall(stack_t **stack, __attribute__((unused))unsigned int line_count)
{
	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
