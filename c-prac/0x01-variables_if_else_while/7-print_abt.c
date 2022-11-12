#include <stdio.h>

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}	

	putchar('\n');

	return (0);
}
			
