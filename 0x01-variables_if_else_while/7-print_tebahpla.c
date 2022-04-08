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

	for (lower_case = 122; lower_case <= 97; lower_case--)
	{
		putchar(lower_case);
	}

	putchar('\n');

	return (0);

}
