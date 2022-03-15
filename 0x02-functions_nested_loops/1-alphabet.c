#include <stdio.h>

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(10);
}
