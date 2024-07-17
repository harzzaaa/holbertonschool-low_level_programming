#include "3-calc.h"

/**
 * main - result
 * @argc: arg
 * @argv: array
 * Return: rtrn
 */

int main(int argc, char *argv[])
{
	int m1, m2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	m1 = atoi(argv[1]);
	op = argv[2];
	m2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && m2 == 0) || (*op == '%' && m2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(m1, m2));

	return (0);
}
