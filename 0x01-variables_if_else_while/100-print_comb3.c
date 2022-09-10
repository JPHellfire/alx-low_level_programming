#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Prints all possible different combinations of two digits.
* Must be seperated by , followed by space
* 01 & 10 == 0 & 1
* Print smalles combo of 2 digits
* Use putchar only
* Return: (0)
*/

int main(void)
{
int n1 = 48;
int n2;
int com = 44;
while (n1 <= 57)
{
n2 = n1 + 1;
while (n2 <= 57)
{
putchar(n1);
putchar(n2);
if (n1 != 56 || n2 != 57)
{
putchar(com);
putchar(32);
}
n2 += 1;
}
n1 += 1;
}
putchar('\n');
return (0);
}
