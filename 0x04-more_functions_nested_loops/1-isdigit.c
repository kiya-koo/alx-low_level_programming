#include "main.h"
/**
 * _isdigit - a function check for digit
 * @c: variable to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
