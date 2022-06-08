#include "main.h"

/**
 * main - Print the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++) /*for loop starting point*/
	{
		_putchar(c);
	} /*End of the for loop*/

	_putchar('\n');/*new line*/
	
}
