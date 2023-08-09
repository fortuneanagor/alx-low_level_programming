#include "main.h"
#include <stdlib.h>
/**
 * create_array 
 * @size: input
 * @c: input
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
		char *mrr;
		unsigned int i;

		if (size == 0)
		{
			return (NULL);
		}

		mrr = malloc(sizeof(char) * size);

		if (mrr == NULL)
		{

			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			mrr[i] = c;
		}

		return (mrr);
}
