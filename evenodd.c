#include <stdio.h>

int main()
{
	int UserIn;
	printf("Type a number: ");
	scanf("%d", &UserIn);
	if(UserIn%2 ==0)
	{
	printf("The number you typed is even\n");
	}

	else
	{
		printf("The number you typed is odd\n");
	}

}
