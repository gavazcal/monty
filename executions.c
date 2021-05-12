#include "monty.h"

/**
 * executions - takes the input and compares it to our opcodes
 * @stack: the stack
 * @param: the parameter
 */
void executions(char *opcode, stack_t **stack, unsigned int param)
{
	int i;
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{NULL, NULL}
	};

	for (i = 0; opcodes[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			(opcodes[i].f)(stack, param);
		}
	}
}
