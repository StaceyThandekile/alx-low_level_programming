#include "main.h"
/**
 * _memcpy  - fills memory with another buffer.
 * @dest: source string
 * @src: string for filling 
 * @n: length of buffer
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

		*(dest + i) = *(str + i);
		i++;
	}
	return (dest);
}
