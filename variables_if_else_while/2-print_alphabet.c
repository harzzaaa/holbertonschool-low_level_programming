#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints alphabet in lowercase
 * Return: Alphabet in lowercase
*/

int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	     char small = tolower(x);
		putchar(small);
	return (0);
}
