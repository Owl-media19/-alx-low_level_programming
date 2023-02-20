#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function that prints both lower and Upper case alphabets
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
