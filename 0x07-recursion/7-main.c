#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("");
    printf("%d   PASSES: empty string\n", r);
    r = is_palindrome("l");
    printf("%d   PASSES: just an l\n", r);
    r = is_palindrome("ll");
    printf("%d   PASSES: just an ll\n", r);
    r = is_palindrome("al");
    printf("%d   NO PASO: this shit dont pass\n", r);

    r = is_palindrome("level");
    printf("%d   PASSES: this passes\n", r);
    r = is_palindrome("redder");
    printf("%d   PASSES: this too shall pass\n", r);
    r = is_palindrome("holberton");
    printf("%d   NO PASSES: this shall not pass\n", r);
    r = is_palindrome("step on no pets");
    printf("%d   PASSES: poppy referece? dont pass\n", r);
    return (0);
}
