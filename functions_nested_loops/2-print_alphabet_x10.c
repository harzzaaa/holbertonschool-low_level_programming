#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet X 10
*/

void print_alphabet_x10(void)
{

	char alphabetX10;
	for (alphabetX10 = 0; alphabetX10 < 10; alphabetX10++)
	{

	for (alphabetX10 = 97; alphabetX10 <= 122; alphabetX10++)
	{
	_putchar (alphabetX10);
	}
	_putchar('\n');
}
}
