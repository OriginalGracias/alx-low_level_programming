#include "main.h"

/**
 * swap_int - takes two integer values and swap them
 * @a: pointer to first value
 * @b: pointer to second value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
