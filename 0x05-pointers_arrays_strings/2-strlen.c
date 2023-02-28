#include "main.h"

/**
 * _strlen - function to return legnth of string
 * @s: string to return
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
