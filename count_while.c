/*
this program demonstrates counting to 10 using a while loop
*/

#include <stdio.h>

int main(void){
	int counter = 1;
	while(counter <= 10){
		printf("%d\n", counter);
		counter = counter + 1;
		/* alternative syntax: (shorthand)
		counter += 1;
		counter++; //this means add 1 to counter
		*/
	}
	printf("COUNTING PROGRAM COMPLETE\n"); 
	return 0;
}
