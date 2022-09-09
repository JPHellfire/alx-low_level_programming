#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - assign random number to n var
*number greater than 0: is positive, number = 0: then = 0
*when number is below 0: then n is negative
* Return: (0)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
