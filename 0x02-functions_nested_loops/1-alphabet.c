#include "main.h"

/**
 * main - Print the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)

{
	char lower_a; /*Declaration Statement*/

	for (lower_a = 'a'; lower_a <= 'z'; lower_a++) /*for loop starting point*/
	{
		_putchar(lower_a);
	} /*End of the for loop*/

	_putchar('\n');/*new line*/
	
	return (0);
}
