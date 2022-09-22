#include "main.h"

/**
 * string_troupper - Changes all lowercase letters to uppercase
 * @p: The string to modify
 *
 * Return: char var
 */
char *string_troupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return(p);
}			
