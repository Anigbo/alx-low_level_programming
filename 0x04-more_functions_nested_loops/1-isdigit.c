#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: character to be checked
 *
 * Return: 1 if character is digit or 0 for any other
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
