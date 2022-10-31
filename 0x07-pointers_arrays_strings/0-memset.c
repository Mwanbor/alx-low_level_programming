#include "main.h"
#include <stdio.h>

/**
 *_memset - fills 1st memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 *
 * Return: the filled memory area
 */
void *_memset(void *s, int b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
