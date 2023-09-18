#include "main.h"
#include <stdio.h>
/*
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search through
 * @accept: array of bytes to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or return NULL if no bytes are found.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int a, b;
for (a = 0; *(s + a); a++)
{
for (b = 0; *(accept + b); b++)
{
if (*(s + a) == *(accept + b))
break;
}
if (*(accept + b) != '\0')
{
return (s + a);
}
}
return (0);
}
