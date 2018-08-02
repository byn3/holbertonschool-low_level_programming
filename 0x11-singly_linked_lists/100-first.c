#include <stdio.h>

void beforeMain(void) __attribute__ ((constructor));

/**
* beforeMain - this will be printed before main
*
* Description: constructor happens after main. descructor is after
* Return: nonne is is voooid
*/

void beforeMain(void)
{
	char *s = "You're beat! and yet, you must allow,\n";
	char *t = "I bore my house upon my back!\n";

	printf("%s%s", s, t);
}
