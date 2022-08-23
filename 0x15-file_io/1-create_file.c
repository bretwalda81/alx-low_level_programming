#include "main.h"

/**
* create_file - function that creates a file
* @filename: name of file
* @text_content: string to write to file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fp, text_out;
int i = 0;

if (filename == NULL)
return (-1);

fp = open(filename, (O_CREAT | O_TRUNC) | O_WRONLY, 0600);
if (fp == -1)
return (-1);

while (text_content[i] != '\0')
i++;
text_out = write(fp, text_content, i);
close(fp);

if (text_out != -1)
return (1);
else
return (-1);
}
