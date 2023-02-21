#include "main.h"

/**
 * print_last_digit _ Entry point
 * Description - Pdrint last digit of a number
 * @n: Integer
 * Return: int
 */

int print_last_digit(int n)
{
	int lst = n % 10;
	if (n < 0)
	{
		lst = lst * -1;
	}
	_putchar(lst + '0');
	return (lst);
}
