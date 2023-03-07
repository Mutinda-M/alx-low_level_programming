#include "main.h"
/**
 *puts2- print numbeers starting with the first
 *@str: string to be checked
 *
 * Return: void
 */
void puts2(char *str)
{	
	int M;

	for(M = 0; str[M]!= '\0'; M++)
	{
	if(M % 2 == 0)
	{
		_putchar(str[M]);
	}
	_putchar('\0');
	}
}
