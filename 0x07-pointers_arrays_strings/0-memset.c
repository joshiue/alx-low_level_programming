#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: Pointer to the space of memory.
 *
 * @b: Constant byte.
 *
 * @n: Bytes of the memory area.
 *
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
