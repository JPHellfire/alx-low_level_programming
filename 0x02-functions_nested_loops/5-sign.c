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
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
