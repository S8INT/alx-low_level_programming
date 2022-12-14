#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples of
* 3 or 5 below 1024.
* Return: Nothing.
*/
int main(void)
{
int i, R;
for (i = 0; i < 1024; i++)
if (i % 3 == 0 || i % 5 == 0)
R += i;
printf("%d\n", R);
return (0);
}
