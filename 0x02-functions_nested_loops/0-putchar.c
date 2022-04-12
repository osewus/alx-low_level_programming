#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
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
