#include "main.h"
/**
 * rev_string- reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int n, m, b;
	char d;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	c = a - 1;
	for (m = 0; b >= 0 && m < b; b--, m++)
	{
		d = s[m];
		s[m] = s[b];
		s[b] = d;
	}
}
