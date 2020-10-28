//design a calc using switch case
#include <stdio.h>

int main()
{
	int op, a, b;
	printf("\nHow may I help you??\n");
	printf("\nPress 1 to add\nPress 2 to subtract\nPress 3 to Multiply\n");
	scanf("%d", &op);
	printf("\nEnter values of a and b = ");
	scanf("%d %d", &a, &b);
	
	switch(op)
	{
		case 1:
			printf("\nAddition is %d", a+b);break;
		case 2:
			printf("\nSubtraction is %d", a-b);break;
		case 3:
			printf("\nMultiplication is %d", a*b);break;
		default:
			printf("\nOperation not between 1 and 3");			
	}
	
	
	return 0;
}
