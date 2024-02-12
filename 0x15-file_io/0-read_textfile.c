#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - this  reads a text file and prints it to the POSIX stdo
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return:  number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int lee;
	ssize_t readout, writeout;
	char *buffer;

	if (filename == NULL)
		return (0);
	lee = open(filename, O_RDONLY);
	if (lee == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(lee);
		return (0);
	}
	readout = read(lee, buffer, letters);
	close(lee);
	if (readout == -1)
	{
		free(buffer);
		return (0);
	}
	writeout = write(STDOUT_FILENO, buffer, readout);
	free(buffer);
	if (readout != writeout || writeout == -1)
	{
		return (0);
	}
	return (writeout);
}
