#include <stdio.h>
#include <stdlib.h>
/**
 * main - Printing text without using printf or puts
 * Return: 1 (Success)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int length = strlen(message);
write(2, message "\n", length);
return (1);
}
