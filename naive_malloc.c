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

	mem = NULL;

	/* Break */
	mem->address = sbrk(0);

	/* Extension */
	mem->size = size + sizeof(size_t) + 10;

	return (mem->address);
}
