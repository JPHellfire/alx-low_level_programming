#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Pprints all possible combinations of single-digit numbers
*Must be seperated by , followed by spaces
*Must be sorted by ascending order, use putchar
* Return: (0)
*/

int main(void)
{
int x = 48;
int y = 44;
while (x <= 57)
{
putchar(x);
if (x != 57)
{
putchar(y);
putchar(32);
}
x += 1;
}
putchar('\n');
return (0);
}
