#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring variables*/
	int x, y;

	x = 0;
	while (x < 8) /*number repetitions*/
	{
		y = 0;
		while (y < 8)
		{
			_putchar (a[x][y]);
			y++;
		}
		_putchar ('\n'); /*print new line*/
		x++; /*add +1*/
	}

}
