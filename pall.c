#include "monty.h"

void pall(stack_t **stack, __attribute__((unused))unsigned int param)
{
	stack_t *temp = *stack;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
	}
}
