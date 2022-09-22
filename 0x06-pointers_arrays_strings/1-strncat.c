#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int delen = 0, c = 0;

	while (dest[delen])
	{
		delen++;
	}

	while (c < n && src[c])
	{
		dest[delen] = src[c];
		delen++;
		c++;
	}

	dest[delen + n + 1] = '\0';

	return(dest);
}
