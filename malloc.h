#ifndef __MALLOC_H__
#define __MALLOC_H__

/* Data Struct */

/**
 * struct mem_alloc_s - size and address of chunk of memory
 *
 * @address: address of allocated chunk
 * @size: size of allocated chunk
 */
typedef struct mem_alloc_s
{
	void *address;
	size_t size;
} mem_alloc_t;

/* Prototypes */
void *naive_malloc(size_t size);

#endif /*__MALLOC_H__*/
