#include "main.h"
/**
 *puts_half- prints half of the string
 *@str: string to be manipulated
 *Return: void
 */
void puts_half(char *str)
{
	int M, i, h, ho;
	i = 1;

	for (M = 0; str[M] != '/0'; M++)
	{
		str[M] = str[i];
		i++;
	}
	h = i / 2;
	ho = (i - 1) / 2;
	if (i % 2 == 0)
	{
		_putchar(str[h]);
		h++;
	}
	else
	{
		_putchar(str[ho]);
	}
}
