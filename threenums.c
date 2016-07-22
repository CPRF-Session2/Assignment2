#include <stdio.h>   /*Armstrong Threenums it checks if all three numbers are equal, if they are not it gives you the largest number*/
int main()
{
	printf("choose a number\n");
	int x;
	scanf("%d", &x);
	printf("choose another number\n");
	int y;
	scanf("%d", &y);
	printf("choose a final  number\n");
	int z;
	scanf("%d", &z);
	if ((x==y)&&(x==z)&&(y==z)){
	printf("all the numbers are equal\n");}
	else{
	printf("the numbers are not all equal\n");
		if ((x>y)&&(x>z)){
			printf("This is the largest number: %d \n", x);}
		if ((y>x)&&(y>z)){
			printf("This is the largest number: %d \n", y);}
		if ((z>x)&&(z>y)){
			printf("This is the largest number: %d \n", z);}
					}
	printf("this is the sum of the numbers: %d \n", x+y+z);

	}
