#include "main.h"

/**
 * print_last_digit - Entry point
 * Description - Print last digit of a number
 * @n: Integer
 * Return: int
 */

int print_last_digit(int n)
{
	int 1st = n % 10;

	if (n < 0)
	{
		lst = lst * -1;
	}
	_putchar(lst + '0');
	return (1st);
}
