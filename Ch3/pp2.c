#include <stdio.h> 

int main(void) 
{ 
	int number, date1, date2, date3; 
	float price; 

	printf("Enter item number: ");
	scanf("%d", &number); 

	printf("Enter unit price: "); 
	scanf("%f", &price); 

	printf("Enter purchase date: ");
	scanf("%d/%d/%d", &date1, &date2, &date3); 

	printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n"); 
	printf("%d\t$%6.2f\t%.2d/%.2d/%.4d\n",number, price,date1,date2,date3); 
}