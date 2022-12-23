#include "main.h"
/*
 * _strncat: concatenates two strings but add inputted number of bites
 *@dest:string to be appended
 *@src: string to be completed
 *n: integer paramterto compare index
 *Return: returns new concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[dest_len++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
