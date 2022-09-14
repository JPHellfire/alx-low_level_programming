#include "main.h"
/**
* print lowrcs alphabet letters
*
* Return: void
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
