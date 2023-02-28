#include "main.h"
/**
 * swap_int - swaps integers
 * @a: first value to swap
 * @b: second value to swap
 * Return: void
 */
oid swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
