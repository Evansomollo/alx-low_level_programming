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
	int num;

       srand(time(0));
	n = read() - RAND_MAX /2;
       printf("last digit of %d is",n);
       num = n % 10;
        if (n > 0)
        {
                printf("%d is graeter than 5\n". num );
        }
        else if ((num < 0) && (num < 0)) 
	
        {
                printf("%d is less than 6 and not 0\n"\,num);
        }
        else
        {
               printf("%d  is 0\n",num);
        }
        return (0);
}

