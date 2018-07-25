#include "function_pointers.h"

/**
* print_name - a function that prints a name
* @name: the name you want printed
* @f: the function pointer you point to. duh
*
* Description: Does stuff. learning function pointers. im hungry
* Return: void. no return. calls on stuff.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
