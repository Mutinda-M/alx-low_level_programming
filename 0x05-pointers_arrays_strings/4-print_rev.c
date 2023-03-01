#include "main.h"
/**
 *print_rev - prints string in reverse
 *@s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i] != '\0')
	{
		i--;
		_putchar(s[n]);
	}
	_putchar('\n');
}
