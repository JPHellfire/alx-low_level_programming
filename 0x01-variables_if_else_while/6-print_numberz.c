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
int sidig = 48;
while (sidig <= 57)
{
putchar(sidig);
sidig += 1;
}
printf("\n");
return (0);
}
