#include "main.h"

/**
 * _isalpha - function checks alphabet
 * @c: par checked
 * Return: 1 if alphabet
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
