/* Drew French */

/* Does a bunch of stuff
 * with 3 numbers given
 * by the user
 */

# include <stdio.h>
int a;
int b;
int c;
int d;
int sum;

int main()
{	
	printf("\nEnter a value for a: ");
	scanf("%d", &a);
	printf("Enter a value for b: ");
	scanf("%d", &b);
	printf("Enter a value for c: ");
	scanf("%d", &c);
	
	if(a == b && b == c)
	{
		printf("\nnumbers are equal\n");
	}
	else
	{
		if(a > b && a > b)
		{
			d = a;
		}
		if(b > a && b > c)
		{
			d = b;
		}
		if(c > a && c > b)
		{
			d = c;
		}
		printf("\nnot equal (largest # is %d)\n", d);
	}
	
	sum = a + b + c;
	printf("\n(sum is %d)\n", sum);
	
	return 0;
}