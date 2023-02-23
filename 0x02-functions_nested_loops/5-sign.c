#include <stdio.h>

/**
*print_sign- prints the sign of a number returns 1 if the number is > || = to 0
*
*@n: The input number as an integer.
*
* Return: 1 is greater than zero. 0 is zero.
* -1 is less than zero.
*/
int main(void
{
	int n;

	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
	putchar('\n');
}
