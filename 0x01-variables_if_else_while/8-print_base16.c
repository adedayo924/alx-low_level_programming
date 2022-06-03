#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	/*Declaring statement*/
	char norlcbase_16;

	/*for base 16 number count 0-9*/
	for (norlcbase_16 = 48; norlcbase_16 <= 57; norlcbase_16++)
	{
		/*print all the numbers in base 16*/
		putchar(norlcbase_16);
	}

	/*for lowercase in base 16 a-f*/
	for (norlcbase_16 = 97; norlcbase_16 <= 102; norlcbase_16++)
	{
		/*print all the lowercase alphabet in base 16*/
	       putchar(norlcbase_16);
	}
	/*new line*/
	putchar('\n');

	return (0);
}
