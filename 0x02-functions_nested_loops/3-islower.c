/**
 * main - function that prints the alphabet, lowercase
 * Return: nothing.
 */
#include "main.h"
void print_alphabet(void)
{
int l = 'a';
while (l <= 'z')
{
_putchar(l);
l += 1;
}
_putchar(10);
}
