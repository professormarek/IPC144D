/*
this program provides advice about what to do depending on the outdoor temperature
VERSION 3
use the if-else-if statement to offer the user various advice,
depending on the user's input
*/

#include <stdio.h>

int main(void){
	//declare a variable to store the temperature
	int temp = 0;

	//prompt the user to enter a temperature
	printf("How's it feeling out there? Enter the temperature in celcius: ");
	//read the response into a variable using scanf
	scanf("%d", &temp); //don't forget the &

	//make a decision and give the user advice based on the temperature
	if(temp > 30){
		/*the curly braces let us group statements into one block or 
		sequence.. the entire sequence within these braces will be
		controlled by the if condition 
		*/
		printf("Wear sunscreen\n");
		printf("Drink lots\n");
	}else if (temp >= -1 && temp <= 1){
		printf("Be careful out there, it could be icy!\n");
	}else if(temp < 5){
		printf("wear a coat\n");
	}else
		printf("It's temperate\n");
	printf("So long...\n");
	
	return 0;
}
