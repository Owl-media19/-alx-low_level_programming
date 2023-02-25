#include "main.h"
/**
 * main - print - putchar and add new lines
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count = 0, size;

	size = sizeof(str) / sizeof(int);
	do {
		_putchar(str[count]);
		count++;
	} while (count < size);
	_putchar('\n');
	return (0);
}
