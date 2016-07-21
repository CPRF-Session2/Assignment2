/*Jared Wasserman*/

#include <stdio.h>

int main(){

	printf("Enter three numbers seperated by spaces: ");
	int a;
	int b;
	int c;
	scanf("%d %d %d",&a,&b,&c);
	if (a==b&&b==c){
		printf("Numbers are equal\n");
	}else{
		printf("Not equal\n");
		
		if (a>=b&&a>=c){
			printf("The largest number is: %d\n",a);
		}else if (b>=a&&b>=c){		
			printf("The largest number is: %d\n",b);
		}else{
			printf("The largest number is: %d\n",c);
		}
	}
	printf("The sum is: %d\n",(a+b+c));

	return 0;
}
