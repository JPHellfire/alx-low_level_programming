nclude <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Prints lowercase alphabet in reverse
* Followed by new line, use only putchar
* Return: (0)
*/

int main(void)
{
int x = 122;
while (x > 96)
{
putchar(x);
x -= 1;
}
putchar('\n');
return (0);
}
