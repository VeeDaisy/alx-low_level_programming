#include "main.h"

/**
 * _strncpy - copies
 * @dest: pointer
 * @src: source pointer
 * @n: strings num
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
