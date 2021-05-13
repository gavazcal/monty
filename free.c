#include "monty.h"

/**
 * free_stack - free stack
 * @stack: the stack
 */

void free_stack(int status, void *line)
{
	stack_t **stack;
	stack_t *temp;
	(void) status;

	stack = (stack_t **) line;
	while (*stack != NULL)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

/**
 * close - closes the file
 * @file: file to be close
 */

void close_file(int status, void *line)
{
	FILE *file;
	(void) status;
	file = (FILE *) line;
	fclose(file);
}

void free_line(int status, void *line)
{
	char **liner = line;
	(void) status;
	
	if (*liner != NULL)
	{
		free(*liner);
	}
}
