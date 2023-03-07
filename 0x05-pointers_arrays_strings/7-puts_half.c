#include "main.h"
/**
 *puts_half- prints half of the string
 *@str: string to be manipulated
 *Return: void
 */
void puts_half(char *str)
{
	int m, i, h, ho;
	strlen = i;
	i = 1;

	for (m = 0; str[m] != '/0'; m++)
	{
		str[m] = str[i];
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
