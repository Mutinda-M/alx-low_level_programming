#include "main.h"
#include <studio.h>
/**
 * main - check the code
 * 
 * Return: Always 0
 */
int _isupper(int c)
{
	char c;
	
	if (c >= 'A' && c <= 'Z')
	{
		printf("%c: %d\n", c, _isupper(c));
		return (1);
	}
	else
	{
		printf("%c: %d\n", c, _isupper(c));
		return (0);
	}

}
