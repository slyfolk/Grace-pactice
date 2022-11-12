#include <stdio.h>

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	putchar('\n');

	return (0);
}
			
