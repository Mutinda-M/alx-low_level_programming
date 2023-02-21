#include <stdio.h>
/**
 * main - print alphabets in lower case.
 *
 * Return: Return o when correct
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
