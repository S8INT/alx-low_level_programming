#include <unistd.h>
/**
 *-putchar: function displays character c to the output
 *@c: is the character to display.
 *
 *Return: returns 1 on success.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
