/* Can Parlar - Takes 3 inputs and checks if they are equal, if they are not equal it prints out the largest number and the sum of the numbers. If they are it prints out the sum of the numbers. */

#include <stdio.h>

int main() {
	int a, b, c, d;
	printf("Enter a number:");
	scanf("%d", &a);
	printf("Enter a number:");
	scanf("%d", &b);
	printf("Enter a number:");
	scanf("%d", &c);
if (a == b && b == c) {
	printf("Your numbers are equal!\n");
}
else {
	printf("Your numbers are not equal!\n");
	if (a >= b && a > c) {
	printf("The largest number is:%d\n",a);
	}
	if (c >= a && c > b) {
	printf("The largest number is:%d\n",c);
	}
	if (b >= c && b > a) {
	printf("The largest number is:%d\n",b);
	}
}
d = a + b + c;
printf("The sum of the numbers is:%d\n",d);
}



