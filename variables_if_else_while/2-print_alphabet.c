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
	      x = tolower(x);
		putchar(x);
		return (0);
}
