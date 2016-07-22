#include <stdio.h>
int main() {
	printf("\nEnter a number:");int num1;
	scanf("%d",&num1);
	printf("\nEnter another number:"); int num2;
	scanf("%d",&num2);
	printf("\nEnter a last number:"); int num3;
	scanf("%d",&num3);
	if (num1==num2 && num2==num3)
		printf("Numbers are equal.\n");
	else
		printf("Not equal.\n");
		if (num1>=num2 && num1>=num3)
			printf("%d\n",num1);
		else if (num2<=num1 && num2>=num3)
				printf("%d\n",num2);
			else
				printf("%d\n",num3);
	printf("%d\n",num1+num2+num3);

	return 0;
}
