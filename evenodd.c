/*Jared Wasserman*/
#include <stdio.h>

int main(){

	int userinput;
	
	printf("Enter a integer: ");
	scanf("%d",&userinput);
	userinput%2 == 0 ? printf("%d is even\n",userinput) : printf("%d is odd\n",userinput);

	return 0;
}
