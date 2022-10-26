#include <stdio.h>

int main(void)
{
	char a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long int);
	int d = sizeof(long long int);
	int e = sizeof(float);
	int f = 500;
	char g = 'a';
	
	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
	printf("Size of a float: %d byte(s)\n", e);
	
	printf("size %d bytes\n", f);
	printf("char g %c \n", g);
	return (0);
}
