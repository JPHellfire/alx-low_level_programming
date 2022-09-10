#include <stdio.h>

/**
* main - prints all single digit numbers of base 10
* followed by a new line. Only use putchar, twice
* Allowed functions: write putchar
* Return: (0)
*/

int main(void)
{
int n;
while (n <= 10)
{
putchar(n);
n += 1;
}
putchar("\n");
return (0);
}
