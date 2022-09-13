#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* main - prints the alphabet
*  lowercase, followed by a new line
* Return: int (0)
*/
void prntlwrcsalph(void)
{
int l = 'a';
while (l <= 'z')
{
_putchar(l);
l += 1;
}
_putchar(10);
}
