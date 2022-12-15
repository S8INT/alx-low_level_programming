#include "main.h"
/**
 *print_square - print square of 2 and 10 with '#'
 *@size: The character to print
*/
void print_square(int size)
{
int x, y;
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar(35);
}
_putchar("\n");
}
if (size <= 0)
_putchar("\n");
}
