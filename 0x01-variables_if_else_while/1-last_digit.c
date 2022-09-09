#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*var n store different val when executed
*last digit of n > 5 then string "and is greater than 5"
*last digit of n = 0 then string "and is 0"
*last digit of n < 6 & !=0 then string "and is less than 6 and not 0"
* Return: (0)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
