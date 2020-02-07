#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
int a;
char k;

for (a = 48; a <= 57; a++)
{
putchar(a);
}
for (k = 'a'; k <= 'f'; k++)
{
putchar(k);
}
putchar('\n');
return (0);
}
