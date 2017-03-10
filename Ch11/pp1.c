#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) { 
	
	int amount = 0; 

	int twenties,  tens,  fives,  ones;

	printf("Enter a dollar amount: "); 
	scanf("%d", &amount); 

	pay_amount(amount, &twenties,  &tens,  &fives,  &ones);

	printf("20 bills: %d\n10 bills: %d\n5 bills: %d\n1 bills: %d\n", twenties, tens, fives, ones); 

}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {

	*twenties = dollars/20; 
	dollars = dollars - (*twenties * 20); 

	*tens = dollars/10; 
	dollars = dollars - (*tens * 10); 

	*fives = dollars/5; 
	dollars = dollars - (*fives * 5); 

	*ones = dollars; 

}

