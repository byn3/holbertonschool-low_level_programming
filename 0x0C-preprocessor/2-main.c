#include <stdlib.h>
#include <stdio.h>
/**
* main - prints the name of the file it was compiled from
* Description: uses the __FILE__ macro to do this
* Return: 0 if successful
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
