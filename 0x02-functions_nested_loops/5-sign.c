#include "main.h"
/**
* print_sign - checks for input
* @n: is var defined by input
* Return: function prints sign of number
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (-1);
}
}
