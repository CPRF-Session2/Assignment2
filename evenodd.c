#include <stdio.h>
int main()
{
	printf("Pick a number");
	int x;
	scanf("%2d", &x);
	if  (x%2==0) {
		printf( "Your number is even");
	}
	else
		printf("your number is odd");
}
