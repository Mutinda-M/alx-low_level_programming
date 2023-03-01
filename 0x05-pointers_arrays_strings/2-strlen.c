#include "main.h"
/**
 *int _strlen - gives length of the string
 *@s: pointer to string
 * Return: 0 when correct
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return(i);
}
