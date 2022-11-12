#include <stdio.h>

int main(void)
{
	int i, j;
	char sp = ' ';	

	for(i = 0; i < 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			printf("%d", i);
			printf("%d", j);
			printf("%c", sp);
		}
	}

	printf("\n");

	return (0);

}
