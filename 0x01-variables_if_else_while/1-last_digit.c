#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */


/**
 * main - main point
 *
 * Return: Alwasys (0)
 */

int main(void)
{
int n;
int lastnum;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastnum = n % 10;
if (lastnum > 5)
	printf("last digit of %d is %d and is greater than 5\n", n, lastnum);
else if (lastnum == 0)
	printf("last digit of %d is %d and is 0\n", n, lastnum);
else if
	printf("last digit of %d is %d and is less than 6\n", n, lastnum);
return (0);
}
