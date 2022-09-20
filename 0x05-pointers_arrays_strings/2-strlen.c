#include "main.h"

/**
 * _strlen - Returns the length of string
 * @s: String to count
 *
 * Retrun: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
