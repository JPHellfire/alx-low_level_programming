/**
* swap_int - switches from  first input second input.
* @a: First value to swap.
* @b: Second value to swap.
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
