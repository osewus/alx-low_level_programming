#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case;
	char upper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}

	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(uppercase);
	}
	putchar('\n');

	return(0);

}
