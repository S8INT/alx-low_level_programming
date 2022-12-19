#include "main.h"
/*
 * puts - Write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 *
*/
void _puts(void *str)
{
int len;
for (len = 0; str[len] != '\0'; len++)
{
_putchar(str[len]);
}
_putchar('\n');
}
