#include<stdio.h>

void beforeMain(void) __attribute__ ((constructor));

/**
* beforeMain - this will be printed before main
*
* Description: constructor happens after main. descructor is after
* Return: nonne is is voooid
*/

void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n
	I bore my house upon my back!\n");
}
