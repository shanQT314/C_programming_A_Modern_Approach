#include <stdio.h>

int main(void) { 
	
	int n; 

	printf("Enter a two digit number: "); 
	scanf("%d", &n); 

	int first = n/100; 
	int second = n/10;
	second = second %10; 

	int third = n % 10;

	printf("Number is %d%d%d\n", third, second, first); 
	
	
}