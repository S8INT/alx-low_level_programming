#include <stdio.h>
#include "main.h"
/*
 * main - print the name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 *Return: Always 0 (success)
*/
int main(int argc, char *argv)
{
int i;
if (argc == 1)
printf("%d\n", argc - 1);
else
{
for (i = 0; *argv; i++, argv++);
printf("%d\n", i - 1);
}
return (0);
}
