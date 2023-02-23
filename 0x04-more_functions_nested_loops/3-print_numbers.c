#include "main.h"
#include <stdio>

/**
 * print_numbers - prints the numbers, fromm 0 to 9, followed by a newline
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
