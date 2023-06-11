/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "malloc.h"

**
 * naive_malloc - simple version of malloc
 * @size: size to allocate
 *
 * Return: pointer to allocated chunk
 *
void *naive_malloc(size_t size)
{
	mem_alloc_t *mem;

	*Break*
	mem = sbrk(0);

	* Extension *
        mem->size = size + sizeof(size_t) + 10;
	mem->address = sbrk(mem->size);

	return (mem->address);
}*/

#include <stdlib.h>
#include <unistd.h>

/**
 * naive_malloc - simple version of malloc
 * @size: size to allocate
 *
 * Return: pointer to allocated chunk
 */
void *naive_malloc(size_t size)
{
	void *previous_break;

	previous_break = sbrk(size);
	/* check for error */
	if (previous_break == (void *) -1)
	{
		/* on error malloc returns NULL */
		return (NULL);
	}
	return (previous_break);
}
