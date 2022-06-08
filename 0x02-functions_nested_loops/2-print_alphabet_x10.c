#include "main.h"

/**
 * void print_alphabet_x10 - Print 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	/*Declaration statements*/
	char lowercase_a;
	int i = 0;

	while (i < 10)
	{
		for (lowercase_a = 'a'; lowercase_a <= 'z'; lowercase_a++)
		{
			_putchar(lowercase_a);
		}

		_putchar('\n');

		lowercase_a++;
	}
}
