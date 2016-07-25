/*Checks if user input is odd or even */
#include <stdio.h>
int main () {
	int input;
	printf("Enter a number:");
	scanf("%d", &input);
	if (input%2 == 0) {
		printf("The number is even \n");
	}
	if (input%2 != 0) {
			printf("The number is odd \n");
		}
	else {
		printf("That's not even a number! \n");
	}
	return 0;
}

