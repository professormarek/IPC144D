/*
this program demonstrates counting to 10 using a for loop
*/

#include <stdio.h>

int main(void){
	/*
	the for loop is handy when we know what number we are starting at
	and what number we are stopping at.
	(the while loop is better when you don't know)
	*/
	for(int count = 1 ; count <= 10 ; count++ ){
		printf("%d\n", count);
	}
	printf("COUNTING PROGRAM COMPLETE\n"); 
	return 0;
}
