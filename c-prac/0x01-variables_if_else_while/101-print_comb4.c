#include <stdio.h>

int main(void)
{
	int ones, tens, hundreds;
	
	for (hundreds = '0'; hundreds <= '7'; hundreds++)
	{
		for (tens = (hundreds + 1); tens <= '8'; tens++)
		{
			for(ones = tens + 1; ones <= '9'; ones++)
			{

				putchar(hundreds);
				putchar(tens);                   
				putchar(ones);
				if (hundreds == '7')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	
	putchar('\n');

	return (0);

}
