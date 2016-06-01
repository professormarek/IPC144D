/*
this program is another selection (if-else) example
it will ask the user to enter a number
and tell the user whether that number is even or odd
*/

#include <stdio.h>

int main(void){
	int input = 0;
	printf("Enter a whole number: ");
	scanf("%d", &input);
	if(input%2 == 0 )
		printf("Your number was even\n");
	else	
		printf("Your number was odd\n");
	return 0;
}
