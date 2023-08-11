#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Printing text without using printf or puts
 * Return: 1 (Success)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t bytes_written = write(STDERR_FILENO, message, 59);

    if (bytes_written == -1)
    {
        return (1);
    }

    return (1);
}
