#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);

n = get_bit(0, 0);
    printf("chould be 0 %d\n", n);
n = get_bit(1, 0);
    printf(" should be 1 %d\n", n);
n = get_bit(1, 1);
    printf(" should give error or 0 %d\n", n);
n = get_bit(0, 2);
    printf("should give error or 0 %d\n", n);
    return (0);
}
