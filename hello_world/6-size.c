#include <stdio.h>
/**
 *main - ?
 *Return: Always 0 Fam
*/
int main(void)
{
	printf("char: %lu byte(s)\n", sizeof(char));
	printf("int: %lu byte(s)\n", sizeof(int));
	printf("longint: %lu byte(s)\n", sizeof(long int));
	printf("longlongint: %lu byte(s)\n", sizeof(long long));
	printf("float: %lu byte(s)\n", sizeof(float));
	return (0);
}
