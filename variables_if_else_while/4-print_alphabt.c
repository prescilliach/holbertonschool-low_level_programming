#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, for letter except q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
