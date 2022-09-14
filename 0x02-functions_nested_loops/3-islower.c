#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
for (char c = 'a' ; c <= 'z' ; c++)
{
write(STDOUT_FILENO, &c, 1);
}
return (0);
}
