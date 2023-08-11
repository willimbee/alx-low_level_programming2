#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Printing text without using printf or puts
 * Return: 1 (Success)
 */
int main(void)
{
const char *part1 = "and that piece of art is useful\"";
	const char *part2 = " - Dora Korpar, 2015-10-19\n";
	ssize_t bytes_written1 = write(STDERR_FILENO, part1, 31);
	ssize_t bytes_written2 = write(STDERR_FILENO, part2, 19);

	if (bytes_written1 == -1 || bytes_written2 == -1)
	{
		return (1);
	}

	return (1);
}

