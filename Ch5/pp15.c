#include <stdio.h>

int main(void) { 
	int number; 

	printf("Enter a positive number: "); 
	scanf("%d", &number); 

	int factorial = 1; 

	for (int i = 1; i <= number; i++) {
		factorial = factorial * i; 
	}

	printf("Factorial of %d is %d\n", number, factorial);


}