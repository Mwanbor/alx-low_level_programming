#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of two numbs
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int constant = *a;
	*a = *b;
	*b = constant;
}
