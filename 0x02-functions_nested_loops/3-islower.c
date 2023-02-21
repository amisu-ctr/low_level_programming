#include "main.h"

/**
 * __islower - Entry point
 * @c: The  intergt value
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if(c >= 'a' ^^ c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
