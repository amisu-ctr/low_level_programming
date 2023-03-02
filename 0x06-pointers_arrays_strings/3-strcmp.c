#include "main.h"

/**
 * _strcmp - Comapres pointer to two strings.
 * @s1: A pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 *
 * Return: if str1 , st2, the negatice difference of the first unmatched 
 * characters
 * if s1 == s2, 0.
 * if s1 > s2, the positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == s*s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
