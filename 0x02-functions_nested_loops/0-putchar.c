#include <string.h>
#include <stdio.h>
#include "Main.h"
/**
* main - program that prints _putchar
* Return: int
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
