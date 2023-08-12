#include <stdio.h>
/**
 * main - Prints digits from 0 to 9 using putchar.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
