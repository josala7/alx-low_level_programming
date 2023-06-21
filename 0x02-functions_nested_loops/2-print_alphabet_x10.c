#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int Line, ch;

	for (Line = 0; Line <= 9; Line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
