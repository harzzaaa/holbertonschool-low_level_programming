#include "main.h"

/**
 * main - Function who prints the arguments it receives
 *
 * @argc: Argument Count
 *
 * @argv: Argument Vector
 *
 * Return: It returns the arguments printed line by line
*/

int main(int argc, char *argv[])
{

	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
