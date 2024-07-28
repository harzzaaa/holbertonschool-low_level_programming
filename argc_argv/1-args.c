#include "main.h"

/**
 * main - Function that prints number of the arguments passed to it
 *
 * @argc: Argument Count to integer
 *
 * @argv: Argument Vector to char
 *
 * Return: Returns number of of arguments passed into this
*/

int main(int argc, char *argv[])
{
	(void) argv;
	{
		printf("%d\n", argc - 1);
		return (0);
	}
}
