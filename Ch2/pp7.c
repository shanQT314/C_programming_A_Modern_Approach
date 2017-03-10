#include <stdio.h>

int main(void) { 
	
	int amount = 0; 

	printf("Enter a dollar amount: "); 
	scanf("%d", &amount); 

	int twentys = amount/20; 
	amount = amount - (twentys * 20); 

	int tens = amount/10; 
	amount = amount - (tens * 10); 

	int fives = amount/5; 
	amount = amount - (fives * 5); 

	printf("20 bills: %d\n10 bills: %d\n5 bills: %d\n1 bills: %d\n", twentys, tens, fives, amount); 

}