#include "main.h"

/**
 * main - Print the lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	print_alphabet();
	int x;

	for (x = 97; x <= '122'; x++) /*for loop starting point*/
	{
		_putchar(x);
	} /*End of the for loop*/

	_putchar('\n');/*new line*/
	
	return (0);
}
