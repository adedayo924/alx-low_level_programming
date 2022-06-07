#include "holberton.h"

/**
 * main - A program that prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int x; /*Declaration statement*/

	char string[9] = "AlxMainSE"; /*Arrays*/

	for (x = 0; x < 9; x++) /*Starting for loop statement*/
	{
		_putchar(string[x]); /*Displaying word*/
	} /*End of for loop statement*/

	_putchar('\n');

	return(0);
}
