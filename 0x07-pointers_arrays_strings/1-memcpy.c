#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory(stored)
 *@src: memory (copied)
 *@n: bytes
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
