#include "main.h"
/**
 * _isupper - go thought cuz of uppercase letters
 * @c: check on char
 *
 * Return: if uppercase return  1, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);

	return (0);
}
