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
char alp = 'a';
while(alp <= 'z')
{
putchar(alp);
alp++;
}
putchar('\n');
}
