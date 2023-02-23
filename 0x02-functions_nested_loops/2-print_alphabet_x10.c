#include <stdio.h>

/**
 * print_alphabet_x10 - this prints the lower cased alphabet 10 times.
 *
 * Return  0 (Success)
 */
int main(void)
{
	int x10, a;

	for (x10 = 0; x10 <= 9; x10++)
	{
		for (a = 97; a <= 122; a++)
		{
			putchar(a);
		}
	putchar('\n');
	}
}
