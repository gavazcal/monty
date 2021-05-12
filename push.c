#include "monty.h"

/**
 * push - pushes a element into the stack
 * @stack: the stack
 * @param: the parameter
 */
void push(stack_t **stack, unsigned int param)
{
	stack_t *new = NULL;

	if (param == 0)
	{
		printf("%d: usage: push interger\n", param);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = param;
	if (*stack != NULL)
	{
		new->next = *stack;
		new->prev = (*stack)->prev;
		(*stack)->prev = new;
		*stack = new;
	}
	if (*stack == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*stack = new;
	}
}
