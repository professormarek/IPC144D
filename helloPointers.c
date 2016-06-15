/*
this program will demonstrate a simple calculation whout needing to use
memory addresses, then we will use it to demonstrate declaring a pionter 
variable, initalizing it, and displaying the memory address
*/

#include <stdio.h>

int main(void){
	/*note; we can declare multiple variables in one line by separating them 
	with a comma
	*/
	int x=0, y=0;
	int z; //we can still do different lines as well

	/*declare a pointer to an integer.. recall that pointers are variables
	that are useful to store the address of other variables
	ALWAYS REMEMBER TO INITIALIZE POINTERS
	*/
	int *myptr = NULL;
	
	//a simple calculation
	x=2;
	y=5;
	z=x + y;
	printf("the value of z is : %d\n", z);

	//get the address of varaible z and store it in myptr
	myptr = &z;
	//display the memory address of z using the %p format with printf
	printf("The memory address of variable z is: %p\n", myptr);
	/*another way to display memory addresses is to use the & operator
	directly inside printf*/
	printf("the memory address of variable y is: %p\n", &y);
	printf("the memory address of variable x is: %p\n", &x);

	return 0;
}
