#include "main.h"

/**
 *_strspn - Function taht get leght of prefix substring
 *@s: string to be researched
 *@accept: pointer to string @s who contain characters in @s
 *Return: count
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int find = 0;
	char *a;

	while (*s != '\0')
	{
		find = 0;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				count++;
				find = 1;
				break;
			}
		}
		if (find == 0)
		{
			break;
		}
		s++;
	}
	return (count);
}
