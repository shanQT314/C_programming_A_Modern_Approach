#include <stdio.h>

int main(void) { 
	
	float number;
	float largest = 0;  

	while(1) {

		printf("Enter a number: "); 
		scanf("%f", &number); 

		if (number > largest) { 
			largest = number; 
		}

		if (number <= 0) {
		break;
		}
	}

	printf("\nThe largest number entered was %.2f\n", largest); 

}