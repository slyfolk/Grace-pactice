#include "main.h"

int main(void)
{

	printf("Display alphabets in lower case\n");

	int count = 0;

	while (count <= 10)
	{	
		print_alphabet_x10();
		count++;
	}

	printf("Thank you\n");

	return (0);
}

void print_alphabet_x10(void)
{
	
	int index = 'a';

	while (index <= 'z')
	{	
		_putchar(index);
		index++;
	}

	_putchar('\n');

}
