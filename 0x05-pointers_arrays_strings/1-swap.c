#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a: pointer of first value
 * @b: pointer of second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
