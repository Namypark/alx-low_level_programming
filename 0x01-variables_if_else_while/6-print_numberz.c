#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point for the program
 *
 * This function takes an integer input from the user and checks whether it is
 * positive or negative. It then prints an appropriate message to the console
 * indicating the result.
 *
 * Return: 0 if the program runs successfully
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
	}
putchar ('\n');
return (0);
}
