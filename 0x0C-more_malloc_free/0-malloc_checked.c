#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - memory function
 * @b: size of memory
 *
 * reserves memory of size b,
 *
 * Return: Null
*/
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);
	
	if (m == 0)
	{
		exit(98);
	}

	return (m);
}
