#include "main.h"
/**
* print_square - prints a square
* @size: size of square
* Return: nothing.
*/
void print_square(int size)
{
int col = 0, row = 0;
if (size > 0)
{
for (row < size; row++)
{
for (col < size; col++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
_putchar('\n');
}
