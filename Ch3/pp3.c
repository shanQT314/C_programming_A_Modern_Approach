#include <stdio.h>

int main(void) { 
	
	int prefix, identifier, code, number, digit; 

	printf("Enter ISBN: "); 
	scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &code, &number, &digit);

	printf("Prefix: %d\nIdentifier: %d\nCode: %d\nNumber: %d\nDigit: %d\n", prefix, identifier, code, number, digit); 

	
	}