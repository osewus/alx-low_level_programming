#include <stdlib.h>
#include <time.h>
/*more headers goes there*/ 
#include <stdio.h>
#include "main.h"
/*betty style doc for function main goes there */
/**
 *print_alphabet_x10 - prints alphabets in lower case 10 times
 **/
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;
	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

