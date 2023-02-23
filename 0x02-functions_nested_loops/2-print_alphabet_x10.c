#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int d = 0;

	while (d <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		d++;
	}
}
