#include "main.h"
/**
 * print_numbers - Prints the integers 0 to 9 and a nw line
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
