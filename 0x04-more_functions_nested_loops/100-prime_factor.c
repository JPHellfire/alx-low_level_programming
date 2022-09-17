#include <stdio.h>
/**
* main - prints the largest prime factor of the number
* 612852475143
* Return: 0.
*/
int main(void)
{
long num = 612852475143;
long divisor = 2;
while (num != 1)
{
if (num % divisor == 0)
{
num = num / divisor;
}
divisor += 1;
}
printf("%ld\n", divisor);
return (0);
}
