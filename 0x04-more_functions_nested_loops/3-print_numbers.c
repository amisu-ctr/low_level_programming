#include "main.h"
#include <stdio>

/**
 * print_numbers - prints the numbers, fromm 0 to 9, followed by a newline
 * Return: void
 */

void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n')
}
