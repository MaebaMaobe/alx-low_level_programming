#include <stdio.h>

/**
 * main - prints Holberton
 *
 * Description: prints Holberton
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(text[i]);
	}
	putchar(10);

	return (0);
}
