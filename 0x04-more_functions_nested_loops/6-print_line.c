#include "main.h"

/**
 * print_line - Draws a straight line according to parameter
 * @n: the number of lines to draw
 *
 * Return: empty
 */
void prrint_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar(95);
		}
	}
	
	_putchar('\n');
}
