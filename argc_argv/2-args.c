#include <stdio.h>

/**
 *main - program that print arguments
 *@argc: argument
 *@argv: argument
 * Return: string a to argv
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
	printf("%s\n", argv[m]);
	}
	return (0);
}
