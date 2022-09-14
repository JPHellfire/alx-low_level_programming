#include "main.h"
/**
* _abs - computes absolute val
* @x: input number
* Return: int
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
