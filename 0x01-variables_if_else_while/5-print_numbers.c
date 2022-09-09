#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* Prints single digit of base 10 starting at 0 followed by new line
* Return: (0)
*/

int main(void)
{
int sidig;
while (sidig < 10)
{
printf("%d", sidig);
sidig += 1;
}
printf("\n");
return (0);
}
