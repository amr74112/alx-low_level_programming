#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-Entry point
 *
 * Description: true or false validation
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i positive\n", n);
	else if (n == 0)
		 printf("%i zero\n", n);
	else
		 printf("%i negative\n", n);

	return (0);
}
