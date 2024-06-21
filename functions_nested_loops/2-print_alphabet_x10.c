#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet X 10
*/

void print_alphabet_x10(void)
{
	int p;
	char alphabet;


	for (p = 0; p < 10; p++)
	{

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

}
}
