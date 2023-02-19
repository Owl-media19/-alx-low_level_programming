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
	int ch = 'a';
	int CH = 'A';

		while (ch <= 'z');
		{	
			putchar(ch);
			ch++;
		}
		while (CH <= 'Z');
		{
			putchar(ch);
			CH++;
		}

			putchar('\n');
	return (0);
}
