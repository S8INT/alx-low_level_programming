#include "main.h"
char *_strstr(char *haystack, char *needle)
{
unsigned int len;
len = 0;
while (needle[len] != '\0')
len++;
while (*haystack != '\0')
{
if (_strncmp(haystack, needle, len) == 0)
return (haystack);
haystack++;
}
return (NULL);
}
