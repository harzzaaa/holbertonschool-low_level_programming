#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
*/

int main(void);
{
	int noon;

	for (noon = 1; noon <= 100; noon++)
	{
		if (noon % 3 == 0 && noon % 5 == 0)
			printf("FizzBuzz ");
		else if (noon % 3 == 0)
			printf("Fizz ");
		else if (noon % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", noon);
	}

	printf("\n");

	return (0);

}
