#include "main.h"

/**
 * puts2 - prints characters of a string
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
		c++;
	for (c = 0; c <= 9; c++)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}

	_putchar('\n');
}
