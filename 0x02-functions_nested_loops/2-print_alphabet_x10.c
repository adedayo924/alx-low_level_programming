#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	/*Declaration statements*/
	int l_a;
	int count;

	
	count = 0;
	while (count < 10)
	{
		for (l_a = 'a'; l_a <= 'z'; l_a++)
		{
			_putchar(l_a);
		}

		_putchar('\n');

		l_a++;
	}
}
