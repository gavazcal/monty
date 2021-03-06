#include "monty.h"
/**
 * executions - takes the input and compares it to our opcodes
 * @opcode: opcode being pass on
 * @stack: the stack
 * @line_count: the line_counteter
 */
void executions(char *opcode, stack_t **stack, unsigned int line_count)
{
	int i;
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", op_pop},
		{"swap", swap},
		{"nop", nop},
		{"add", add},
		{"sub", sub},
		{"mul", mul},
		{"mod", mod},
		{"div", div_ision},
		{NULL, NULL}
	};

	for (i = 0; opcodes[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			(opcodes[i].f)(stack, line_count);
			return;
		}
	}
	if (opcodes[i].opcode == NULL)
	{
		dprintf(2, "L%d: unknown instruction %s\n", line_count, opcode);
		exit(EXIT_FAILURE);
	}
}
