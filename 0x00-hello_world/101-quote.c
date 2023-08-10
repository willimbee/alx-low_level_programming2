#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Printing text without using printf or puts
 * Return: 1 (Success)
 */
int main(void)
{
 const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t bytes_written = write(STDERR_FILENO, message, 59); // 59 is the length of the message

    if (bytes_written == -1) {
        perror("write");
        return 1;
    }

    return 1;
}
