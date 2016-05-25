/*
this program provides advice about what to do depending on the outdoor temperature
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
		printf("Wear sunscreen\n");
		printf("Drink lots\n");
	}
	printf("So long...\n");
	
	return 0;
}
