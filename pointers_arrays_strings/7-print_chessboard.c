#include "main.h"

/**
 * print_chessboard - Function who prints a chessboard
 * @a: array for the chessboard ([8] = 8x8)
*/

void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			write(1, &&a[m][n], 1);
		}
		write(1, "\n", 1);
	}
}
