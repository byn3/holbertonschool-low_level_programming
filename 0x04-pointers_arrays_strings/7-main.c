#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
   	str = "012345678";
    puts_half(str);
str = "01234567";
    puts_half(str);
str = "0123456";
    puts_half(str);
str = "012345";
    puts_half(str);
str = "01234";
    puts_half(str);
str = "0123";
    puts_half(str);
str = "0";
    puts_half(str);
str = " ";
    puts_half(str);
str = "";
    puts_half(str);	 
return (0);
}
