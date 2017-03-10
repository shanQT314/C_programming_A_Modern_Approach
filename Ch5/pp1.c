#include <stdio.h>

int main(void) { 
	
	printf("Enter a number: "); 

	int number; 
	scanf("%d", &number); 

	int digits = 0; 

	if (number <10 && number >= 0) { 
		digits = 1; 
	} else if (number < 100 && number >= 10) {
		digits = 2; 
	} else if (number <1000 && number >= 100) { 
		digits = 3; 
	} else if (number <10000) { 
		digits = 4; 
		 
	}

	printf("The number %d has %d digits\n", number, digits); 

}