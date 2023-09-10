#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main funtion
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n == 0)
	{
		printf("%d is %s/n", n, "zero");
	}
	else
	{
		printf("%d is %s\n", n, "negetive");
	}
	return (0);
}
