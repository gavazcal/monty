#include "monty.h"
void push(stack_t **stack, unsigned int param);
int line_count = 0;
/**
 * main - a simple monty interpreter
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *input, *tokens, *number;
	size_t str_len = 0;
	unsigned int param = 0;
	char *opcode, *delim = " \t\n";
	FILE *file;
	stack_t *stack = NULL;

	opcode = argv[1];
	file = fopen(opcode, "r");
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (file == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (argc == 2)
	{
		for (line_count = 1; getline(&input, &str_len, file) != -1; line_count++)
		{
			tokens = strtok(input, delim);
			number = strtok(NULL, delim);
			while (number != NULL)
			{
				param = atoi(number);
				if (param == 0)
				{
					number = strtok(NULL, delim);
				}
				else
				{
					executions(tokens, &stack, param);
					break;
				}
			}
			if (number == NULL)
			{
				param = 0;
				executions(tokens, &stack, param);
			}
		}
	}
	while (stack != NULL)
	{
		free(stack);
		stack = stack->next;
	}
	free(stack);
	free(tokens);
	fclose(file);
	return (0);
}
