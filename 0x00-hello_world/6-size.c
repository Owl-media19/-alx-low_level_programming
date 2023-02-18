#include <stdio.h>
/**
 * main - A program that prints sizes
 * Return: 0 (success)
 */
int main(void)
{
	char w;
	int x;
	long int y;
	long long int z;
	float a;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(a));
return (0);
}
