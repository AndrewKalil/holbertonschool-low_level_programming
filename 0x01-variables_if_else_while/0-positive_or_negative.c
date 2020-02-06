#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *The "main" function will assign a random intiger to the variable n
 *of the int n. The function can give a positive or a negative number 
 *every time it was ran.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
	}
	return (0);
}
