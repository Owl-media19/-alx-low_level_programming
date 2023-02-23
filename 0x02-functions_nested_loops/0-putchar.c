#include <stdio.h>
/**
* main-print -purchar and add a new line
*
* Return: always 0 (success)
*/
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count = 0, size;

	size = sizeof(str) / sizeof(int);
	do {
		putchar(str[count]);
		count++;
	} while (count < size);
	putchar('\n');
	return (0);
}
