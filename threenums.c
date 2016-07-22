#include <stdio.h>
int main ()
{
	float Your_First_Number, Your_Second_Number, Your_Third_Number, Sum;
	printf("Write your first number: ");
	scanf("%f", &Your_First_Number);
	
	printf("Write your second number: ");
	scanf("%f", &Your_Second_Number);

	printf("Write your third number: ");
	scanf("%f", &Your_Third_Number);

	if (Your_First_Number == Your_Second_Number && Your_Second_Number ==  Your_Third_Number){
	printf("numbers are equal \n");
	}

	else
	printf("not equal\n");
		if(Your_First_Number >= Your_Second_Number && Your_Second_Number > Your_Third_Number || Your_First_Number >= Your_Third_Number && Your_Third_Number > Your_Second_Number){
			printf("%f\n", Your_First_Number);
			}
		if(Your_Second_Number >= Your_Third_Number && Your_Third_Number > Your_First_Number || Your_Second_Number >= Your_First_Number && Your_Third_Number > Your_First_Number){
			printf("%f\n", Your_Second_Number);
			}
		if(Your_Third_Number >= Your_First_Number && Your_First_Number > Your_Second_Number || Your_Third_Number >= Your_Second_Number && Your_Second_Number > Your_First_Number){
			printf("%f\n", Your_Third_Number);
			}
		
	Sum = Your_First_Number + Your_Second_Number + Your_Third_Number;
	printf("%f\n", Sum);

	return 0;

}
