#include "monty.h"

void executions(char *opcode, unsigned int param)
{
	stack_t *stack = NULL;
	int i;
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	for (i = 0; opcodes[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			(opcodes[i].f)(&stack, param);
		}
	}
}
