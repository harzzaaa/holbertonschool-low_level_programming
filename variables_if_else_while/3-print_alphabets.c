#include <stlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet in lowercase then uppercase
 * Return: Alphabet in lowercase and uppercase
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar(\n);
	return (0);
}
