#include <stdio.h>

int main(void)
{
	int ones, tens;
	
	for (tens = '0'; tens <= '8'; tens++)
	{
		for(ones = tens + 1; ones <= '9'; ones++)
		{
			putchar(tens);                   
			putchar(ones);
			if (tens == '8')
			{
				break;
			}
			putchar(',');
			putchar(' ');
			}
		}

	
	putchar('\n');

	return (0);

}
