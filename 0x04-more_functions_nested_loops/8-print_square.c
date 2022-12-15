#include "main.h"
/**
 *print_square - print square of 2 and 10 with '#'
 *@size: The character to print
*/
void print_square(int size)
{
int x, y;
y = 0;
if (size < 1)
_putchar('\n');
while (y < size)
{
x = 0;
while (x < size)
{
_putchar('#');
x++;
}
_putchar('\n');
y++;
}
}
