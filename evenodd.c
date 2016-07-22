/* Drew French */

/* Determines if a number input
 * by the user is even or odd
 */

# include <stdio.h>
int input;
int output;

int main()
{	
	printf("\nEnter a number: ");
	scanf("%d", &input);
	output = input % 2;
	if(output == 1 || output == -1)
	{
		printf("\nThis number is odd.\n");
	}else
	{
		printf("\nThis number is even.\n");
	}
	
	return 0;
}