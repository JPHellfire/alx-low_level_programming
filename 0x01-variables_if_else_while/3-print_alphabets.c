#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Prints alphabet in lowercase, then uppercase followed by new line
* Return: (0)
*/

int main(void)
{
int a = 'a';
int b = 'A';
while (a <= 'z')
{
putchar(a);
a += 1;
}
while (b <= 'Z')
{
putchar(b);
b += 1;
}
putchar('\n');
return (0);
}
