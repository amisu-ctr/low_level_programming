#include "main.h"
/**
 * main - entry point
 * _putchar : print the alphabets _putchar
 * Return: Always (0)
 */

int main(void)
{
	char c[] = "_putchar\n";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	
	return (0);
}
