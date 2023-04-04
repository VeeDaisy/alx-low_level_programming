#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: num of  bytes
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0 ; i < j ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
