/*Write a program threenums.c that takes in 3 user-input numbers and prints “numbers are equal” if all 3 numbers are equal, and “not equal”, followed by the largest number, if the numbers are not equal. Then print out the sum of the 3 numbers.*/
#include <stdio.h>
int main(){
	int x,y,z;
	printf("Please give me three numbers: \n");
	scanf("%d %d %d", &x, &y, &z);
/*	printf("your numbers are: %d %d %d", x,y,z);*/

	if (x==y && y==z)	
		printf("numbers are equal\n");
	else 
		printf("The numbers are not equal, the largest number is");
if (!(x==y && y==z));{
	if (x>y && x>z)
		printf(" %d\n",x);
	else if (y>x && y>z)
		printf(" %d\n",y);
	else
		printf(" %d\n",z); 
}
	printf("The sum of the numbers is %d\n", x+y+z);
	return 0;
}
