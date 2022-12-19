#include "main.h"
/**
* _strlen - Function that returns the length of a string
*
* @s: this is the input string
*
* Return: Lenngth of the string
*/

int _strlen(char *s)
{
int len;
for (len = 0; s[len] != '\0'; len++)
;
return(len);
}
