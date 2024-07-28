#include "main.h"

/**
 * main - Function who prints itself
 *
 * @argc: Argument Count
 *
 * @argv: Argument Vector
 *
 * Return: Returns file name followed by new line
*/

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
