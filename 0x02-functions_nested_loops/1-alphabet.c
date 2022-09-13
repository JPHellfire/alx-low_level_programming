#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* main - prints the alphabet
*  lowercase, followed by a new line
* Return: int (0)
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
putchar('\n');
}
