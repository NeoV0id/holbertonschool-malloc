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

	mem = sbrk(size + sizeof(size_t));
	mem->size = size + sizeof(size_t);
	mem->head = mem;

	if (mem == (void *) -1)
		return (NULL);
	if (mem->size <= 10)
                return (naive_malloc(mem->size));

	return (mem);
}
