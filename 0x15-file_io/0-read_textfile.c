#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that Reads a text file, prints to stdout.
 * @filename: A pointer to the read file.
 * @letters: The numbers  of letters to be read and print.
 *
 * Return: If the filename is Null - 0 or the function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buf;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

o = open(filename, O_RDONLY);
r = read(o, buf, letters);
w = write(STDOUT_FILENO, buf, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buf);
return (0);
}

free(buf);
close(o);

return (w);
}

