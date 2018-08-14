#include "holberton.h"

/**
* append_text_to_file - appends text tot he end of a file
* @filename: the name duh
* @text_content: the text we want added
*
* Description: OMG THIS PLACE HAS NO AC
* Return: should return 1 if works or -1 if error
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		return (-1);
	while (text_content[count])
		count++;
	if (!text_content)
		if (write(file, text_content, count) == -1)
			return (-1);
	close(file);
	return (1);
}
