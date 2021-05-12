#include "monty.h"
int line_count;
/**
 * swap - swap the top 2 elements
 * @stack: the stack
 * @param: parameter
 */

void swap(stack_t **stack, __attribute__((unused))unsigned int param)
{
	unsigned int length = 0, temp = 0;

	length = count(*stack);
	if (length < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_count);
		exit(EXIT_FAILURE);
	}

	if (*stack)
	{
		temp = (*stack)-> n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
		return;
	}
}

/**
 * count - counts number of nodes
 * @stack: the stack
 *
 * Return: number of elements
 */

unsigned int count(stack_t *stack)
{
	stack_t *temp;
	unsigned int length;

	temp = stack;
	for (length = 0; temp != NULL; length++)
	{
		temp = temp->next;
	}
	return (length);
}
