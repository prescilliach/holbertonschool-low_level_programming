#include "main.h"

/**
 * _puts - Prints a string, followed by a new line,to stdout.
 * @str: pointer to the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = o;

	while(str[i] != 'o')
	{
		_putchar(str[i]);
		i++
	}
	_putchar('\n');
}	
