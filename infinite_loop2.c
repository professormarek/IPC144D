/*
this program demonstrates an infinite loop
this time using a variable in the condition
*/

#include <stdio.h>

int main(void){
	int counter = 1;
	while(counter <= 10){
		printf("counter is %d\n", counter);
	}
	printf("this will never print, because the loop above will never end"); 
	return 0;
}
