#include "main.h"

/**
 * 1-swap - swap values of two integers a and b
 * @a: A pointer to an int that will be updated
 * @b: A pointer to an int that will be updated
 * Return: void
 */

void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}


