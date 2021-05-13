#include "monty.h"

/**
 * isadigit - check if string is a number
 * @digit: string pass
 *
 * Return: return 1 if string is a number
 */

int isadigit(char *digit)
{
	char *numbers = "0123456789";
	int i = 0, j;

	if (digit[0] == '-')
	{
		i = 1;
	}
	for (; digit[i] != '\0'; i++)
	{
		for (j = 0; numbers[j] != '\0'; j++)
		{
			if (numbers[j] == digit[i])
			{
				break;
			}
			if (j == 9)
			{
				return (0);
			}
		}
	}
	return (1);
}
