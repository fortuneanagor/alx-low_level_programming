#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint - conversion of  a binary number to an
 * unsigned int.
 * @b: binary.
 * @len
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ti;
	int len, deci_two;

	if (!b)
		return (0);

	ti = 0;
	

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, deci_two=1; len >= 0; len--, deci_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ti += deci_two;
		}
	}

	return (ti);
}
