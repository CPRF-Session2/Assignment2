/*Matthew Kellerman*/
#include <stdio.h>

int main()
{
	int x;
	int y;
	int z;

	printf("Please enter three numbers: \n");
		scanf("%d", &x);
		scanf("%d", &y);
		scanf("%d", &z);
	if (x == z && x ==y)
		printf("Numbers are equal.\n");
	        else  
		if ( x > y && x > z)   {
		  printf("Not equal.\n" );
		  printf("The largest number you inputed is %d \n",x);
}	else                  
	 if (y > x && y > z)  {
	printf("Not equal.\n");
	printf("The largest number you inputed is %d \n",y);
	 } 
	else{
	 if (z > x && z > y)  
	printf("Not equal.\n");
	 printf("The largest number you inputed is %d \n",z);
	}
int xyz = x + y + z;
printf("The sum of x, y, and z is %d\n",xyz);
}

