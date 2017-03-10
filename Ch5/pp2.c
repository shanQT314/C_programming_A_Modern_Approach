#include <stdio.h>

int main(void) { 
	int hours, minutes; 

	printf("Enter a 24-hour time: "); 
	scanf("%d:%d", &hours, &minutes); 

	
	if (hours > 12) {
		hours = hours - 12; 
	}

	printf("Equivelant 12-hour time: %d:%2d\n", hours, minutes);


}