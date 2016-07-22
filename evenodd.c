/*This program tells whether a user-inputted number is even or odd (integers only!) - Amanda Cuevas*/
#include <stdio.h>
int main()
{
	printf("Please enter a number.\n");
		int n;
	scanf("%d", &n);
	if (n%2==0){
		printf("The number you have entered is even.\n");
	}
	else {
		printf("The number you have entered is odd.\n");
	}
return 0;
}
