#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desied value
 * @n: number of bytees to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_ memset(char *s, char b, unsigned int n)

{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
