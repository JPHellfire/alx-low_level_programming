#include <unistd.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void
_putchar (char c)
{
write(STDOUT_FILENO, &c, 1);
}
void print_alphabet(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
}
int
main(void)
{
print_alphabet();
return (0);
}
