#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all single digit numbers of base 10 starting from 0, followed by a new line.
* Only use putchar, twice
* Return: (0)
*/

int main(void)
{
int x = 48;
while (x <= 57)
{
putchar(x);
x += 1;
}
printf("\n");
return (0);
}
