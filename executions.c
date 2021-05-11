#include "monty.h"

void executions(char *opcode, stack_t **stack, unsigned int param)
{
	int i;
	instruction_t opcodes[] = {
		{"push", push},
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
