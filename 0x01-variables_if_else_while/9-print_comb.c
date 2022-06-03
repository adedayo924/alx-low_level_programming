#include <stdio.h>
/**
 * main - Entry point
 *
 * Retuurn: Always 0 (Success)
 */
int main(void)

{
	int num; /*Declaring statement*/
	
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
	putchar('\n');

	return (0);
}
