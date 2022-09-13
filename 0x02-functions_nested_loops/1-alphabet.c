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
int counter, length = strlen(string);
for (counter = 0 ; counter < length; counter++)
{
putchar(string[counter]);
}
return (0);
}
