#include <stdio.h>
/**
 * main - print all small letter excluding q and e
 *
 * Return: Return 0 when correct
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		if (d != 'e' && d != 'q')
		{
			putchar(d);
		}
		d++;
	}
	putchar('\n');
	return (0);
}
