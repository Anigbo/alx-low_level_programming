#include "main.h"

/**
 * _isalpha - check if character is alphabet
 * @c: Letter being tested
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
