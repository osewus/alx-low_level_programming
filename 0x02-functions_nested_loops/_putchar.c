#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* -putchar - writes the character c to stdout */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * on error, -1 is returned, and errorno is set appropriately */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

