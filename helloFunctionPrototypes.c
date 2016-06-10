/*
this program demonstrates creating and using programmer defined functions
Version 3 - demonstrates functions with arguments, and return values
*/

#include <stdio.h>

//the line below is a function prototype
int power(int base, int exponent);
//the prototype is only the first line of the function with a ; at the end
//and no { }
//its only purpose is to tell the compiler it will find the complete power function later in the file



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
	//store the computed value of 2 to the power of 3
	int answer = 0;

	//call a function by using its name followed by ()
	//if the function expects any information (arguments), provide the arguments between () 
	welcome();	
	/*
	use the power function to compute 2 raised to the power of 3 by calling the power 
	function and passing the arguments in the correct order, that is: base, exponent
	the power function will return a result that use can assign to a variable using =
	*/
	answer = power(2,3);
	printf("Two raised to the power of three is: %d\n", answer);
	//call the goodbye message function and pass the value 15 as an argument
	goodbye_message(15);

	return 0;
}

/*
recall: the arguments are the pieces of information the function needs to do its job
*/
int power(int base, int exponent){
        int result = 1;

        for(int i = 0 ; i < exponent; i++){
                //uncomment the next line to observe what is happening in this loop
                //printf("DEBUG: inside power function. base is %d, exponent is %d, result is %d, i is %d\n", base, exponent, result, i);
                result = result * base;
        }

        return result;
}

