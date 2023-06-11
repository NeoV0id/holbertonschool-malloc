#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "malloc.h"

/**
 * naive_malloc - simple version of malloc
 * @size: size to allocate
 *
 * Return: pointer to allocated chunk
 */
void *naive_malloc(size_t size)
{
	void *mem;

	mem = sbrk(size + sizeof(size_t));

	if (mem == (void *) -1)
		return (NULL);

	return (mem);
}
