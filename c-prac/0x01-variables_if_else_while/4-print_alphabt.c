#include <stdio.h>

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == 'e' || lower == 'q')
		{
			continue;
		}

		putchar(lower);
	}	

	putchar('\n');

	return (0);
}
			
