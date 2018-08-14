#include "holberton.h"
#include <stddef.h>

/**
* create_file - a function that creates a file
* @filename: the name pointer
* @text_content: meh repost.
*
* Description: I AM SO SLEEPY.
* Return: 1 on success or -1 if error
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t file;
	int count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	while (text_content[count])
		count++;
	if (!text_content)
		if (write(file, text_content, count) == -1)
			return (-1);
	close(file);
	return (1);
}
