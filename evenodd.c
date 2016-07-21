/* Can Parlar - Checks if the input is odd or even */

#include <stdio.h>

int main() {
	int userInput;
	int remainder;
	printf("Enter a number:");
	scanf("%d", &userInput);
remainder = userInput % 2;
if (userInput == 0 || remainder == 0) {
	printf("Your number is even!\n");
}
else {
	printf("Your number is odd!\n");
}}
