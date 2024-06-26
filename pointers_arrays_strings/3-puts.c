#include "main.h"
#include <stdio.h>

/**
 *_puts - function that print string
 *@str: string that going to be printed
 *Return: return to void
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 *main - test of _puts function 
 *
 *Return: 0 
*/  
int main(void)
{
	char string = "Welcome Back";
       _puts(string);
	return (0);
}
