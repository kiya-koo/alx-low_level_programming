#include "main.h"
/**
 * _puts - prints the string
 * @str: the string being printed
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
