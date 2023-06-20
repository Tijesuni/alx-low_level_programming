#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the size of variuos data type
 * Return: 0(success)
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a lon long int: %ld byte(s)\n", sizeof(lon long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
