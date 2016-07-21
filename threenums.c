/*Jinoo Hong*/
/*Take in 3 user-input numbers and print “numbers are equal” if all 3 numbers are equal, and “not equal”, followed by the largest number, if the numbers are not equal.  Then print out the sum of the 3 numbers.*/

#include <stdio.h>
int main() {
	int num1, num2, num3, total;
	
	printf("Please enter a number: ");
	scanf("%d", &num1);
	printf("\nPlease enter another number: ");
	scanf("%d", &num2);
	printf("\nPlease enter a third number: ");
	scanf("%d", &num3);
	
	if (num1==num2&&num1==num3) {
		printf("\nNumbers are equal");
		total=num1*3;
	}
	
	else {
		printf("\nNot equal");
		int largest = num1;
		if (num1<num2) {
			largest = num2;
		}
		if (largest<num3) {
			largest = num3;
		}
		printf("\n The largest number is %d", largest);
		total=num1+num2+num3;
	}
	printf("\nThe sum of the numbers is %d \n", total);
}
