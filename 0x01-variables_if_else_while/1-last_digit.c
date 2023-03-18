#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5) 
	{
		printf("greater than %d\n", 5);
	}
	else if (last_digit == 0)
	{
		printf("%d\n", last_digit);
	}
	else
	{
		printf("less than %d and not %d\n", 6, 0);
	}
	return (0);
}
