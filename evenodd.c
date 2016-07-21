/*Jinoo Hong*/
/*This checks if your number is even or odd*/

#include <stdio.h>
int main() {
	printf("Please enter a number: ");
	int x;
	scanf("%d", &x);
	if (x%2==0) {
		printf("\nYour number is even\n");
	}
	else {
		printf("\nYour number is odd\n");
	}
	return 0;
}
