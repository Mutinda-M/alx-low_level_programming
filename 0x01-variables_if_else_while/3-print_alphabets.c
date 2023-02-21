#include <stdio.h>
/**
 * main - prints in both lower case and upper case
 *
 * Return: Returns 0 when correct
 */
int main(void)
{
	char c = 'a';
	char d = 'A';
	while (c <= 'z');
	{
		putchar(c);
		c++;
	}
	while (d <= 'A');
	{
		putcher(d);
		d++;
	}
	putchar('\n');
	return (0);
}
