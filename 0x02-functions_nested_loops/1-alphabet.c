#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* main - prints the alphabet
*  lowercase, followed by a new line
* Return: int (0)
*/
int main(void)
{
int counter, length = strlen(alpha);
for (counter = 0 ; counter < length; counter++)
{
putchar(alpha[counter]);
}
return (0);
}
