/*Rebecca Hale Assignment 2 Part 1*/
#include <stdio.h>
  int main(){
	int a, b, c;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);
	if(a==b && b==c){
		printf("numbers are equal\n");
	}
	else {
		printf("not equal\n");
		if(a>=b && a>=c)
			printf("%d\n", a);
		else if(b>=a && b>=c)
			printf("%d\n", b);
		else printf("%d\n", c);
	}
	int sum = a;
	sum+=b;
	sum+=c;
	printf("%d", sum);
	
	return 0;
  }
