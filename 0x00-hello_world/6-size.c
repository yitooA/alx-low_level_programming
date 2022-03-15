#include <stdio.h>

/**
 * main - prints the size of data types of many type
 *
 * Description: This is a longer description.
 * The program prints list of data types with their size using unsigned long integer`````
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;


	printf("Size of a char: %lu.\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n",(unsigned long)sizeof(i));
	printf("Size of a char: %lu.\n",(unsigned long)sizeof(l));
	printf("Size of a char: %lu.\n",(unsigned long)sizeof(ll));
	printf("Size of a char: %lu.\n",(unsigned long)sizeof(f));

	return (0);
}
