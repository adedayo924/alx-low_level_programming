#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	/*Declaring statement*/
	char norlc_base_16;

	/*for base 16 number count 0-9*/
	for (norlc_base_16 = 48; norlc_base_16 <= 57; norlc_base_16++)
	{
		/*print all the numbers in base 16*/
		putchar(norlc_base_16);
	}

	/*for lowercase in base 16 a-f*/
	for (norlc_base_16 = 97; norlc_base_16 <= 102; norlc_base_16++)
	{
		/*print all the lowercase alphabet in base 16*/
	       putchar(norlc_base_16);
	}	
	/*new line*/
	putchar('\n');

	return (0);
}
