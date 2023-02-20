#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Succes)
 *
 */

int main(void)
{
	int n;

	strand(time(0));

	if (n > 0)
	{
		printf("%d is positive\n". n);
	}
	else if (n==0)
	{
		printf("%d is zero\n",n);
	}
	else if (n<0)
	{
		printf("%d  is negative\n",n);
	}
	return (0);
}

