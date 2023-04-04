#include "main.h"
/**
 *_memset - fills memory with value
 * @s: starting address
 * @b: desired value
 * @n:num of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
