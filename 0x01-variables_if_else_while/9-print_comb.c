#include <stdio.h>

/**
 * main - Entry point 
 *
 * Retuurn: Always 0 (Success)
 */

int main(void)

{
	/*Declaring statement*/
	int num;

	/*for the print of all numbers*/
	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	
		if (num == 57)
		{
			break;
		}
		
		putchar(',');
		putchar(' ');
	}
	
	/*new line*/
	putchar('\n');

	return (0);
}
