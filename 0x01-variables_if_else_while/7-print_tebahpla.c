#include <stdio.h>
/**
 * main - A program that prints alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
/* Declare a character variable to contains alphabet*/
	char ch;
/* iterate through all the letters in the alphabet, from 'a' to 'z' */
	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
  /*print a new line to the console.*/
	putchar('\n');
	return (0);
}
