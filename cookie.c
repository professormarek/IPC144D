/*
this program will repeatedly ask the user to accept a cookie until they agree
*/

#include <stdio.h>

int main(void){
	int userResponse = 0;

	while(userResponse != 1){
		printf("Do you want a cookie? Press 1 for YES, 0 for NO:");
		scanf("%d", &userResponse);
	}	
	printf("Cookie Accepted (Mwa ha ha ha)\n");
	return 0;
}
