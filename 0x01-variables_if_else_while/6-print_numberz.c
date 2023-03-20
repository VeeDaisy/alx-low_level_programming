#include <stdio.h>

/**
 * main -program that prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
