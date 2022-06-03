#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	/*Declaring statement*/
	char n_or_lc_base_16;

	/*for base 16 number count 0-9*/
	for (n_or_lc_base_16 = 48; n_or_lc_base_16 <= 57; n_or_lc_base_16++)
	{
		/*print all the numbers in base 16*/
		putchar(n_or_lc_base_16);
	}

	/*for lowercase in base 16 a-i*/
	for (n_or_lc_base_16 = 97; n_or_lc_base_16 <= 105; n_or_lc_base_16++)
	{
		/*print all the lowercase alphabet in base 16*/
	       putchar(n_or_lc_base_16);
	}
	
	/*new line*/
	putchar('\n');

	return (0);
}
