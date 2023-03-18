#include <stdio.h>
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
	char letter = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
putchar('\n');
return (0);
}

