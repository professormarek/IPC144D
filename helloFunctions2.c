/*
this program demonstrates creating and using programmer defined functions
Version 2 - demonstrates functions with arguments
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

/*
this function demonstrates accepting information as an argument
it does not return a result
it does print out a goodbye message the specified number of times
when the fucntion is called (see main() ) the value that's placed within the () is copied into the "times" argument
*/
void goodbye_message(int times){
	for(int count = 0; count < times; count++){
		printf("goodbye\n");
	}
}

int main(void){

	//call a function by using its name followed by ()
	//if the function expects any information (arguments), provide the arguments between () 
	welcome();	

	//eventually do some stuff here
	
	//call the goodbye message function and pass the value 15 as an argument
	goodbye_message(15);

	return 0;
}
