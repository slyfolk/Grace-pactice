#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int index;
	int count = 0, holder = 0;

	char ararr[][7] = {"school", "pen", "book"};

	int arint[] = {1, -3, 5, -7, 9};

	char archa[] = {'a', 'e', 'i', 'o', 'u', '\0'};

		



	printf("element is: %s\n", ararr[1]);
	printf("element is: %c\n", ararr[0][5]);
	printf("element is: %s\n", ararr[0]);

	printf("element is: %d\n", arint[3]);
	
	for (index = 0; index <= 4; index++)
	{
		printf("%d", arint[index]);
		if(index == 4)
			break;
		printf(", ");			
	}	
	printf("\n");
	

	
	for (index = 0; index <= 4; index++)
	{
 
		if(index == 4)
			printf("%d", abs(arint[index]));
		
		else
			printf("%d, ",abs(arint[index]));
			
	}	
	printf("\n\n");

	while (count <= 4)
	{
		printf("%d", arint[count]);
		if(count == 4)
			break;
		printf(", ");
		
		count++;			
	}
	printf("\n\n");
	
	do{
		printf("%d", abs(arint[holder]));
		if(holder == 4)
			break;
		printf(", ");
		holder++;			
	}
	while(holder <= 4);

	printf("\n\n");






	printf("element is: %c\n", archa[4]);
	printf("element is: %c\n\n", archa[5]);
	printf("element is: %c%c%c%c%c\n\n", archa[0], archa[1],archa[2], archa[3], archa[4]);
	printf("element is: %s\n", archa);
	
	return (0); 

}
