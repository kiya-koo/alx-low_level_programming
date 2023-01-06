#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: variable for pointing to dest
 *@src: variable for pointing to src
 *@n: variable for integer byte
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;
 
	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
