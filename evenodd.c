#include <stdio.h>
int main()
{
	int z;
	double y, Your_Number, xx;
	printf("Enter a number: ");
	scanf("%lf", &Your_Number);	/*this works yay*/
	
	y = Your_Number / 2;	    /*y is the exact answer, or a floating point*/
	z = Your_Number / 2;  /*z is the just the left side of the decimal point*/	
	xx = y - z;  /*xx is the right side of the decimal point (0.0 or 0.5*/		
	
	if (xx == 0){
	printf("Your_Number is even \n");
	}
	else {
	printf("Your_Number is odd \n");
	}
	return 0;				
}



