#include <stdio.h>

void main(void)
{
	int x;
	char *p;
	int *c;
	
	p = "hello";
	x = 10;
	c = &x;
	*c = 20;
	

	printf("The address is: %p\n", p);
	printf("The address is: %s\n", p);
	printf("The address is: %s\n", *p);
	printf("The address is: %s\n", *(p+1));
	printf("The address is: %p\n", &p[0]);
	//printf("The value is: %d\n", *c);

}



