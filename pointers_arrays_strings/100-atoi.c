#include "main.h"

/**
 *_atoi - function that converts the string to integer
 *@s: string to convert
 *Return: value of integer of the converted string
*/
int _atoi(char *s)
{
	int signs = 1;
	int num = 0;
	int started = 0;

	while (*s != '\0')
		if (*s == '-' && !started)
	{
		signs = -signs;
		}
		else if (*s == '+' && !started)
		{

		}
		else if (*s >= '0' && *s <= '9')
		{
		num = (num * 10) + (*s - '0');
		started = 1;
		}
		else if (started)
		{
		break;
		}
		s++;
	}
	return (num * signs);
}
