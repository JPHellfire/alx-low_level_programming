#include "main.h"
/**
*_sqrt_recursion -  func that returns the natural square root of a number.
* @n: for number input
* Return: 0
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
else if (n == 1)
return (1);
else if (n < 0)
return (-1);
else
return (r(n, 1));
}
int r(int n, int i)
{
if (n == (i * i))
return (i);
else if (n > (i * i))
return (r(n, i + 1));
else
return (-1);
}
