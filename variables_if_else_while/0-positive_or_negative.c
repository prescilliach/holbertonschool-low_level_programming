#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* main - Prints if a number is positive, negative or zero
 *
 * Return: 0
 */
int main(void)
{
	int numbers[] = {98, -25, 0};
	int i;

	for (i = 0; i < 3; i++)
	{
		int n = numbers[i];

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	}

	return (0);
}
	
