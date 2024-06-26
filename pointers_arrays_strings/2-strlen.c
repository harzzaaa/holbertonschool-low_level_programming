#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - function that returns the lenght of a string
 * main1 - prints the lenght of the string
 * Return: 0
*/

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')

		lenght++;

	return (lenght);
}

int main1(void)
{
	char strlenght[] = "Welcome You";

	printf("%d\n", _strlen(strlenght));

	return (0);
}
