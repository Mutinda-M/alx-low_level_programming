#include <stdio.h>
/**
 * main - prints smalls letters then capital letters
(*
 * Return: Returns 0 if correct
 */
int main(void)
{
	char d = 'a';
	char e = 'A';

	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	while (e <= 'Z')
	{
		putchar(e);
		e++;
	}
	putchar('\n');
	return (0);
}	
