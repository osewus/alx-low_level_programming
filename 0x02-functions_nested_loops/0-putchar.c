#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/* -putchar - writes the character c to stdout */
/** Trying out
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * on error, -1 is returned, and errorno is set appropriately */
int main(void)
{
	char ermias[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(ermias[c]);
	}
	_putchar('\n');
	return (0);
}
