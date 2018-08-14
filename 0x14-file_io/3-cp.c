#include "holberton.h"

/**
* argument_error97 - error handling with arguments. exit 97
* @arguments: the number of argc
*
* Description: prints out a line to std error and exits
* Return: None it is void
*/

void argument_error97(int arguments)
{
	if (arguments != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
* read_error98 - error handling with reading. exit 98
* @file: the file given to us
*
* Description: prints out a line to std error and exits
* Return: None it is void
*/

void read_error98(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
* write_error99 - error handling with writing. exit 99
* @file: the file given to us
*
* Description: prints out a line to std error and exits
* Return: None it is void
*/

void write_error99(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
* close_error100 - error handling with closing, exit 100
* @file: the file given to us
*
* Description: prints out a line to std error and exits
* Return: None it is void
*/

void close_error100(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}

/**
* main - copies content of a file to another file
* @argc: number of args
* @argv: string of the arguments
*
* Description : does still by calling the helper functions
* Return: 0 if works or exits if error
*/
int main(int argc, char **argv)
{
	int file = -1;
	int file2 = -1;
	int reading = -1;
	int writing = -1;
	int closing = -1;
	char s[1024] = {0};

	argument_error97(argc);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		read_error98(argv[1]);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file2 == -1)
		write_error99(argv[2]);
	do {
		reading = read(file, s, 1024);
		if (reading == -1)
			read_error98(argv[1]);
		writing = write(file2, s, reading);
		if (writing == -1)
			write_error99(argv[2]);
	} while (reading);
	closing = close(file);
	if (closing == -1)
		close_error100(file);
	closing = close(file2);
	if (closing == -1)
		close_error100(file2);
	return (0);
}
