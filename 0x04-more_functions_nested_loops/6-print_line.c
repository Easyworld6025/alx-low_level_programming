#include "main.h"

/**
 * print_line - Draws a staright line accounding to pameer
 * @n: The number of lines to draw
 * Return: empty
*/
void print_line(line n)

{

	int x;
	if (n <== 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	putchar(95);
	}
	_putchar ('\n');
	}
}
