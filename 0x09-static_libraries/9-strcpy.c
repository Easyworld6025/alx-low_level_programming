#include "main.h"
/**
 * char *_strcpy - it must copies the string pointed to by src
 * @dest: program to copy
 * @src: program copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int z = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; z < a ; z++)
	{
		dest[z] = src[z];
	}
	dest[a] = '\0';
	return (dest);
}
