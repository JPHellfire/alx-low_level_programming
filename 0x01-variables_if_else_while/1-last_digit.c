#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - store different val in var when executed
* last digit of n > 5 then string "and is greater than 5"
* last digit of n = 0 then string "and is 0"
* last digit of n < 6 & !=0 then string "and is less than 6 and not 0"
* Return: (0)
*/

int main(void)
{
int n;
int lastn;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;
if (lastn > 5)
{
printf("Last doge of %d is %d and is greater than 5\n", n, lastn);
}
else if (lastn == 0)
{
printf("Last doge of %d is %d and is 0\n", n, lastn);
}
else if (lastn < 6 && lastn != 0)
{
printf("Last doge of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
