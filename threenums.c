/* Determines whether 3 numbers are equal, not equal, which of the three numbers is largest (if that is the case) and the sum of the three numbers.     - Amanda Cuevas */
#include <stdio.h>
int main()
{
	printf("Please enter a number. \n");
		int n;
	scanf("%d",&n);
	printf("Thank you. Now enter a second number.\n");
		int m;
	scanf("%d",&m);
	printf("Good. Now enter the third and final number.\n");
		int o;
	scanf("%d",&o);
	/* The above declares all three variables/numbers. */
	/* The code below will declare the numbers equal if that is the case.*/
		if(n==m){
			if(n==o){
				printf("These numbers are equal. \n");}
		}
/* The code below will state that the numbers aren't equal if that is the case and will compare one variable to the other two in order to determine the largest and print a statement saying it is so. */
		else {
			printf("These numbers are not equal. \n");}
		if(n>m){
			if(n>o){
				printf("The first number,%d, is the largest number.\n",n);}
		       }
		if(m>n) {
			if(m>o) {
				printf("The second number,%d, is the largest number.\n",m);}
			}
		if(o>n){
			if(o>m) {
				printf("The third number,%d, is the largest number. \n",o);}
		       }
/* Regardless of the equal or not equal outcome, this code will determine and print the sum of the three numbers that were inputted by the user through usage of the code aforementioned above. */
		int s;
		s=n+m+o;
		printf("The sum of the three numbers is %d.\n",s);
return 0;
}
