#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
