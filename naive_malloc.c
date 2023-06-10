#include <stdio.h>
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
	void *ptr;

	ptr = brk(size) + sizeof(size_t) + 10;

	return (ptr);
}
