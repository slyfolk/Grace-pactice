#include "main.h"

int main(void)
{
	printf("Display alphabets in lower case\n");
	print_alphabet();
	printf("Thank you\n");
	return (0);
}

void print_alphabet(void)
{
	int index = 'a';

	while (index < 'z')
	{
		_putchar(index);
		index++;
	}

	_putchar('\n');

}




