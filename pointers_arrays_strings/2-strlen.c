#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *
 *
*/

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')

		lenght++;

	return (lenght);
}

int main(void)
{
	char strlenght[] = "Welcome You";

	printf("%d\n", _strlen(strlenght));

	return (0);
}
