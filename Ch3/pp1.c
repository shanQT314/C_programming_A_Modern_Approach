#include <stdio.h>

int main(void) { 
	int month, days, years; 

	printf("Enter a date (mm/dd/yyyy: "); 

	scanf("%d/%d/%d", &month, &days, &years); 

	printf("You entered the date %d%.2d%d\n", years, month, days);  

	
}