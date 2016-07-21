#include <stdio.h>

int main()
{
	int x;
	printf("Please give me a number:\n");
	scanf("%d", &x);
	printf("The number %d", x);
	if (x%2==0)
		printf(" is even!\n");
	else printf(" is odd!\n");

return 0;
}
