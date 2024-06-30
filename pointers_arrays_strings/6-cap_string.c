#include "main.h"
#include <string.h>
/**
 *cap_string - function that capitalizes all words of a string
 *@s: string
 *Return: pointer
*/

char *cap_string(char *s)
{
	char *pointer = s;
	char separators[] = " \t\n,;.!?\"(){}";
	int is_separator = 1;

	while (*pointer != '\0')
	{
	if (strchr(separators, *pointer))
		{
		is_separator = 1;
		}

	else if (is_separator && *pointer >= 'A' && *pointer <= 'Z')
		{
			*pointer = *pointer - ('a' - 'A');
			is_separator = 0;
		}
	else
	{
		is_separator = 0;
	}
	pointer++;
	}

	return (s);
}
