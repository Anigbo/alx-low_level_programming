#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int delen = 0, i;

	while (dest[delen])
	{
		delen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[delen] = src[i];
		delen++;
	}

	dest[delen] = '\0';
	return (dest);
}
