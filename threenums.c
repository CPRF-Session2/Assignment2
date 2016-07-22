/*Mariposa Lee, numbers are equal*/
#include <stdio.h>
int main () {
printf("Please enter three numbers.\n");
	int Num1, Num2, Num3, sum;
	scanf("%d %d %d", &Num1, &Num2, &Num3);
	sum = Num1 + Num2 + Num3;
if (Num1 == Num2 && Num1 == Num3){
	printf("The numbers are equal.\n");}

else { printf("The numbers are not equal.\n");

	if (Num1 > Num2 && Num1 > Num3){
	printf("The largest number is %d.\n", Num1);}

else if (Num2 > Num1 && Num2 > Num3){
	printf("The largest number is %d.\n", Num2);}

else{
	printf("The largest number is %d.\n", Num3);}

printf("The sum of all 3 numbers is %d.\n", sum);
}
}
