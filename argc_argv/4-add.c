#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - function who adds positive numbers
 *@argc: count
 *@argv: vector
 *Return: 0 else Error
*/

int main(int argc, char *argv[])
{
	int m, n;
	int result = 0;
	char *arg;

	if (argc < 2)
	return (0);
	for (m = 1; m < argc; m++)
	{
	arg = argv[m];

	for (n = 0; arg[n] != '\0'; n++)
	{
	if (!isdigit(arg[n]))
	{
	printf("Error\n");
	return (1);
	}
	}
	result += atoi(arg);
	}
	printf("%d\n", result);

	return (0);
}
