#include <stdio.h>

/**
 * main - Entry point
 * Define data ans their size
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char c;
	float f;
	int i;
	long l;
	long long o;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(o));
	return (0);
}
