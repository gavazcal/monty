#include "monty.h"

/**
 * main - a simple monty interpreter
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *input, *tokens;
	size_t str_len = 0;
	int line_count;
	char *opcode;
	FILE *file;
	char *delim = "\n";

	opcode = argv[1];
	file = fopen(opcode, "r");

	if (argc != 0)
	{
		for (line_count = 1; getline(&input, &str_len, file) != -1; line_count++)
		{
			tokens = strtok(input, delim);
			printf("%s\n", tokens);
			if (strcmp(tokens, "push") == 0)
			{
				/*call opcode functions*/;
			}

		}
	}
	return (0);
}
