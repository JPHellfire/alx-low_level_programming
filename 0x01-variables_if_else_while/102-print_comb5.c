#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -  prints all possible combinations
* 2 2 digits
* separated by , followed by a space
* print all with two digits. one be printed as 01
* Return: (0)
*/

int main(void)
{
int x = 48;
int y = 0;
int z;
int xyz = 44;
while (y <= 99)
{
z = y + 1;
while (z <= 99)
{
putchar((y / 10) + x);
putchar((y % 10) + x);
putchar(32);
putchar((z / 10) + x);
putchar((z % 10) + x);
if (y != 98 || z != 99)
{
putchar(xyz);
putchar(32);
}
z += 1;
}
y += 1;
}
putchar('\n');
return (0);
}
