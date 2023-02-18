#include <stdio.h>
/**
 * main - A program that prints sizes of various computer
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
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(a));
return (0);
}
