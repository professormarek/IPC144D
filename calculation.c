/*
this is a multi-line comment, it's used to document the program for human readers
everything between the slash-star and the corresponding star-slash is ignored
by the compiler

this program asks the user to enter two integers
the program will compute the sum of the two numbers
and display the result to the user
*/

//this is a single line comment, everything following the // is ignored

/*
the printf function is provided within the stdio.h library
a library is a way to use code written by others
*/
#include <stdio.h>

/*
every c program we write will have a "main" function
a function is a modular piece of a program
*/
int main(void){
	//the first line or statement executed in your program is the
	//first line of main() - comments are not statements

	//we declare variables to represent each piece of information needed in 
	//the program 

	//first number
	int first = 0;
	//second number
	int second = 0;
	//a variable to store the sum
	int sum = 0;

	//get the first number from the user
	//this is called "prompting" the user

	//1) ask the user a question
	printf("Enter the first number: ");
	//2) copy the number the user entered into a variable
	scanf("%d", &first);
	
	printf("Enter the second number: ");
	scanf("%d", &second);

	//compute the sum
	sum = first + second;

	//display the result for the user
	printf("The sum of the two numbers is: %d \n", sum);

	return 0;
}
