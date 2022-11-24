#include <stdio.h>

int Add(int a, int b)
{
	int c = a + b;
	printf("The address of a in Add: %p\n", &a);
	return (c);
}

int main(void)
{
	int a = 2, b = 4;
	int c = Add(a, b);
	printf("Sum = %d\n", c);
	printf("The address of a in main: %p\n", &a);
	return (0);
}
