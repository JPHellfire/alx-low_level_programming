#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#pragma twice 
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void
_putchar (char q)
{
write(STDOUT_FILENO, &q, 1);
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
