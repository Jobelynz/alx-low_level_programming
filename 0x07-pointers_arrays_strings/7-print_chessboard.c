#include "main.h"
/**
* print_chessboard - a function that prints the chessboard
* @a: an array pointer
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0, x < 8; x++)
	{
		for (y = 0; j < 8; j++)
		{
			putchar(a[x][y]);
		}
		putchar('\n');
	}
}
