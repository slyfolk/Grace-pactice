#include <stdio.h>

int main(void)
{
	int num; 
	
	for (num = 48; num < 58; num++)
	{

		putchar(num);
	 	if (num == 57)
		{
			putchar('$');
			break;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
			
