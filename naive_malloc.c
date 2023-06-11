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
	mem_alloc_t *mem;

	mem = sbrk(0);

	mem->size = size + sizeof(size_t) + 10;
	mem->address = sbrk(mem->size);

	if (mem->address == (void *) -1)
		return (NULL);

	return (mem->address);
}
