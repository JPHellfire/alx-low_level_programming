#include "main.h"
/**
* print_diagonal - draws a line
* @n: input value to check
* Return: nothing.
*/
void print_diagonal(int n)
{
int i = 0;
int j = 0;
while (i < n)
{
while (j <= i)
{
if (j != i)
_putchar(' ');
else
_putchar(92);
j += 1;
}
_putchar('\n');
i += 1;
j = 0;
}
if (n <= 0)
_putchar('\n');
}
