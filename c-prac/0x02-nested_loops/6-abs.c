#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	/*
	 *_putchar(r + '0');
	 * putchar('\n');
	 */
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

int _abs(int a)
{
	return (abs(a));
}
