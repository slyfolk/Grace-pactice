#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* my code */

	if (m > 5)
	{
		printf("%d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("%d is %d and is 0\n", n, m);
	}
	else 
	{
		printf("%d is %d and is less than 6 and not 0\n", n, m);
	}
	
	return (0);
}
