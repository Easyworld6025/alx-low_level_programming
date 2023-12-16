#include "main.h"
/**
 * _strlen - program returns the length of a string
 * @s: to string
 * Return: length
 */
int _strlen(char *s)
{
	int longs = 0;

	while (*s != '\0')
	{
		longs++;
		s++;
	}
	return (longs);
}
