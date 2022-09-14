#include "main.h"
/**
* _islower - checks for lowercase int in
* @c: is alphabet letter
* Return: 1 if lowercase & 0 for uppercase
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
