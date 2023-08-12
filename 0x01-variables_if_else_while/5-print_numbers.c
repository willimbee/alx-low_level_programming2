#include <stdio.h>
/**
 * main - A program that prints single digit numbers from 0 to 10 .
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
		putchar(n + '0');
		n++
	putchar('\n');

	return (0);
}
