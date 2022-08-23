#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file
* @filename: name of file
* @text_content: string to append
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fp, text_out;
int count = 0;
char *buffer = NULL;

if (filename == NULL)
return (-1);
fp = open(filename, O_APPEND | O_WRONLY);
if (fp == -1)
return (-1);

if (text_content == NULL && filename)
return (1);
else if (text_content != NULL)
{
while (text_content[count] != '\0')
count++;
}
else
return (-1);

buffer = malloc(sizeof(char) * count);
if (buffer == NULL)
return (-1);

read(fp, buffer, count);
text_out = write(fp, text_content, count);
if (text_out == -1)
return (-1);

close(fp);
free(buffer);
return (1);
}
