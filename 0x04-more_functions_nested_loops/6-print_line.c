#include "main.h"

/**
 * print_line - print a straight Line
 *
 * @n: is the number of times the _ character
 *	should be printed
*/

void print_line(int n)
{
	int LnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (LnChr = 1; LnChr <= n; LnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
