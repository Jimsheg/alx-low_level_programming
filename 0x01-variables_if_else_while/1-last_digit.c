#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - m
 *Description
 *Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	printf("Last digit of %d is %d ", n, d);
	if (d > 5)
		printf("and is greater than 5");
	else if (d == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	/* your code goes there */
	return (0);
}
