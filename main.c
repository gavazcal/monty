#include "monty.h"

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
	unsigned int line_count, param = 0;
	char *opcode, *delim = " \n";
	FILE *file;

	opcode = argv[1];
	file = fopen(opcode, "r");

	if (argc != 0)
	{
		for (line_count = 1; getline(&input, &str_len, file) != -1; line_count++)
		{
			tokens = strtok(input, delim);
			number = strtok(NULL, delim);
			param = atoi(number);
			if (strcmp(tokens, "push") == 0)
			{
				executions(tokens, param);
			}
		}
	}
	free(tokens);
	fclose(file);
	return (0);
}
