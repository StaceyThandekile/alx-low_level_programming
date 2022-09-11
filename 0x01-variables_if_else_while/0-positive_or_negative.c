#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prin if the number is positive, zero, or negative
*
* Description: using the main function
* this program prints "Positive anything is better than negative nothing
* Return: 0
*/
init main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
	printf("%i is positive/n", n);
}
else if (n == 0)
{
	printf("%i is zero/n", n);
}
else if (n < 0)
{
	printf("%i is negitive/n", n);
}
return (0);
}
