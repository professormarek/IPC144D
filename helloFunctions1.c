/*
this program demonstrates creating and using programmer defined functions
*/

#include <stdio.h>

/*
this function displays a simple welcome message
(you'll do a more thorough job with your workshop)

this function doesn't need any information to do its job because the message is always the same
it also doesn't compute a result therefore,
the return type is void
and the argument list is void
*/
void welcome(void){
	printf("Welcome to my program\n");
	printf("It doesn't do much yet\n");
}

int main(void){

	//call a function by using its name followed by ()
	//if the function expects any information (arguments), provide the arguments between () 
	welcome();	
	return 0;
}
