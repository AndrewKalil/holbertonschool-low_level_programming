#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int a;
int k;

for (a = 48; a <= 57; a++)
{
for (k = 48; k <= 57; k++)
{
putchar(a);
putchar(k);
if (a != 57 || k != 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
