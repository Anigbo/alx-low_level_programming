#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: string to count
 *
 * Retrun: return length
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}
