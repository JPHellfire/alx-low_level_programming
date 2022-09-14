#include "main.h"
/**
* print_last_digit - prints last digit
* @x: input number
* Return: x.
*/

int print_last_digit(int x)
{
x %= 10;
if (x < 0)
x *= -1;
_putchar(x + '0');
return (x);
}
