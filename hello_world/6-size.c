#include <stdio.h>
/**
 *main - ?
 *Return: Always 0 Fam
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a longint: %lu byte(s)\n", sizeof(long int));
	printf("Size of a longlongint: %lu byte(s)\n", sizeof(long long));
	printf("float: %lu byte(s)\n", sizeof(float));
	return (0);
}
