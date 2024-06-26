#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strlen - function that returns the lenght of a string
 *@s: Pointer
 *Return: 0
*/

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')

		lenght++;

	return (lenght);
}

/**
 *main1 - prints lenght of string
 *
 *Return: 0
*/
int main1(void)
{
	char strlenght[] = "Welcome You";

	printf("%d\n", _strlen(strlenght));

	return (0);
}
