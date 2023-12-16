#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: check all character
 * Return: 1 if c is a letter and return 0 if its not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
