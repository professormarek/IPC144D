/*
this program demonstrates a function that accepts a variable and sets that varaible's original value in main() to zero

Version 2: working vesrion

here we demonstrate the use of pointers to solve the problem
*/

#include <stdio.h>

/*
this function sets the value of the varible whose adddress is passed to it to 0
now x is a pointer to an integer int *x
remember that pointers store the addresses of other variables
*/
void zero(int * x){
	//notice that now we need to dereference x to access its value
	//the dereference operator is *
	//ex. to dereference x the syntax is *x
	printf("The value of x INSIDE ZERO is: %d and the address of main's x is: %p\n", *x, x);	
	//store 0 at the memory pointed to by x
	*x = 0;
	printf("The value of x INSIDE ZERO after assignment: %d and the address of x is: %p\n", *x, x);

}

//test the function by writing a main() function
int main(void){
	int x = 5;

	printf("The value of x before calling zero(x) is: %d and the address of x is: %p\n", x, &x);
	//call the zero function, it now expects the ADDRESS of x .. recall the address-of operator &
	zero(&x);
	printf("The value of x after calling zero(x) is: %d and the address of x is: %p\n", x, &x);

	return 0;	
}
