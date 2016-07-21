#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Please type three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c)
	{
	printf("The numbers are equal\n");
	
	}
	else
	{
		printf("The numbers are not equal\n");
		if(a>b && a>c) printf("%d is the largest\n",a);
		if(b>a && b>c) printf("%d is the largest\n",b);
		if(c>b && b>a) printf("%d is the largest\n", c);
	}
}
