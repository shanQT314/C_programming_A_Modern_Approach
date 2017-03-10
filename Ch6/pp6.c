#include <stdio.h>

int main(void) {
	
	double number = 0; 

	printf("Enter value of n: "); 
	scanf("%lf", &number); 

	double m = 0; 
	double i = 2; 

	for(m = 4; m < number; i = i+2) {
		m = i * i; 
		printf("%.0lf\n",m); 
	}
	

}