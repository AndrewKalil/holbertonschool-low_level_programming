#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
char c;
char k;
{
for (c = 'a'; c <= 'z'; c++)
putchar(c);
}
{
for (k = 'A'; k <= 'Z'; k++)
putchar(k);
putchar('\n');
}
return (0);
}
