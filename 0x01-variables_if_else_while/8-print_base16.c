#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Prints all numbers of base 16 using putchar
* Return: (0)
*/

int main(void)
{
int x = 48;
int y = 'a';
while (x <= 57)
{
putchar(x);
x += 1;
}
while (y <= 'f')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
