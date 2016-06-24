/*
this program demonstrates user input validation
assuming the user can input anything
this program will be able to handle any input
*/
#include <stdio.h>

/*
clear the input buffer
*/
void clearBuffer(void){
	int next = 0;
	while(next != '\n'){
		next = getchar();
		printf("DEBUG: clearing character %c out of the buffer, code is: %d\n", next, next);
	}

}

int main(void){
	int x=0;
	int count = 0;
	while( count != 1){
		printf("enter an integer:");
		count = scanf("%d", &x);	
		//clear the buffer immediately after every scanf
		clearBuffer();
	}
	printf("The user entered: %d\n", x);
	printf("DEBUG: count was: %d\n", count);
	return 0;
}
