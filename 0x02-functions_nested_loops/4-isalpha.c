#include "main.h"

/**
 * _isalpha - checks for char alphabets
 * @c: the char to be checked
 *
 * Returns: 1 if c is a letter lower or upper,  0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
