#include <stdio.h>

int sum(int);

int main(void)
{
	char str[10];
	char s[] = "awesome";
	int x;	
	x = 20;
	sum(x);
	
	printf("%d\n", sum(x));
	return (0);
}

int sum(int a)
{
	a = 5;
	
	//printf("%d\n", a);
	
	return (a);
}


