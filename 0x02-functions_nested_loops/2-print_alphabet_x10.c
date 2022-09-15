#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char low;
	char tenx;

	for (low = 0; low <= 9; low++)
	{
		for (tenx = 'a'; tenx <= 'z'; tenx++)
		{
			_putchar(tenx);
		}

		_putchar('\n');
	}
}
