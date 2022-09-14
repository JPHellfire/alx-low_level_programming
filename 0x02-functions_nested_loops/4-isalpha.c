#include "main.h"
/**
* _isalpha - checks for l&u'case
* @c: is alphabet letter
* Return: 1 if l&ucase & 0 otherwise
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
