#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to stdout
* @filename: name of file
* @letters: number of letters to read and print
* Return: the actual number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fp, temp;
char *buffer = NULL;
size_t i;

if (filename == NULL)
return (0);
fp = open(filename, O_RDONLY);

if (fp == -1)
return (0);
buffer = malloc(sizeof(char) * letters + 1);
if (buffer == NULL)
return (0);

i = read(fp, buffer, letters);
if (i > letters)
{
free(buffer);
return (0);
}
temp = write(STDOUT_FILENO, buffer, letters);

if (temp == -1)
{
free(buffer);
return (0);
}
close(fp);
free(buffer);
return (i);
}
