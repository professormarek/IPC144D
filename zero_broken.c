/*
this program attempts to write a function that accepts a variable and sets that varaible's original value in main() to zero
Note: this version doesn't work yet.
we'll see why...
*/

#include <stdio.h>

/*
this function should set the veraible that's passed to it to 0
but this version doesn't work
*/
void zero(int x){
	printf("The value of x INSIDE ZERO is: %d and the address of x is: %p\n", x, &x);	
	//naive attempt
	x = 0;
	printf("The value of x INSIDE ZERO after assignment: %d and the address of x is: %p\n", x, &x);

}

//test the function by writing a main() function
int main(void){
	int x = 5;

	printf("The value of x before calling zero(x) is: %d and the address of x is: %p\n", x, &x);
	zero(x);
	printf("The value of x after calling zero(x) is: %d and the address of x is: %p\n", x, &x);

	return 0;	
}
