#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to output
*/
void _puts(char *s)
{
	int i;

	for(i = 0; str[i] != '/0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
