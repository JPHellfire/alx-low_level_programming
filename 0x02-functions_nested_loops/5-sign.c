#include "main.h"
/**
* _abs - computes absolute val of int
* @x: is input val
* Return: x
*/

int _abs(int x)
{
if (x < 0)
{
x = x * (-1);
return (x);
}
else
return (x);
}
