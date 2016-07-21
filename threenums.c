/*Ashank Kumar*/
#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;

	printf("Enter a number:");
	scanf("%d",&num1);
	printf("Enter a number:");
	scanf("%d",&num2);
	printf("Enter a number:");
	scanf("%d",&num3);
	if(num1 == num2 && num2 == num3)
		printf("equal");
	else
	{
		printf("not equal");
		if((num1 > num2) && (num1 > num3))
			printf("\n%d",num1);
		else if((num2 > num1) && (num2 > num3))
			printf("\n%d",num2);
		else
			printf("\n%d",num3);
	}
	int sum = num1 + num2 + num3;
	printf("\n%d\n",sum);
	return 0;
}
