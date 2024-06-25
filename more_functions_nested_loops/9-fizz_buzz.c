#include <stdio.h>

/**
 * main - FizzBuzz Function
 * Return: 0
*/

int main(void)
{
	int noon;

	for (noon = 1; noon <= 100; noon++)
	{
		if (noon % 3 == 0 && noon % 5 == 0)
			printf("FizzBuzz");

		else if (noon % 3 == 0)
			printf("Fizz");

		else if (noon % 5 == 0)
			printf("Buzz");

		else
			printf("%d ", noon);

		if (noon != 100)
			printf(" ");
	}
		printf("\n");
	return (0);
}
