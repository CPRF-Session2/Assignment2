#include <stdio.h>
int main ()  {
	int num1, num2, num3;
	printf("Input first number:");
	scanf("%d", &num1);
	printf("Input second number:");
	scanf("%d", &num2);
	printf("Input third number:");
	scanf("%d", &num3);

	if (num1 == num2 && num2 == num3) {
		printf("Numbers are equal");
	}
	if (num1 > num2 && num1 > num3) {
		printf("Not equal, %d \n", num1);
	}
	if (num2 > num1 && num2 > num3) {
		printf("Not equal, %d \n", num2);
	}
	if (num3 > num1 && num3 > num2) {
		printf("Not equal, %d \n", num3);
	}
	int add;
	add = num1+num2;
	printf("%d \n", add+num3);
	return 0;
}


