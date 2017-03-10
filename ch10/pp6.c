#include <stdio.h>

int calculate(int x1); 

int main(void) {
	int x1; 

	printf("Insert the values of x: ");
	scanf("%d", &x1);

	printf("The answer is: %d\n", calculate(x1));

}

int calculate(int x1) {
	int value = 3 * x1 * x1 * x1 * x1 * x1; 

	value = value + (2 * x1 * x1 * x1 * x1);
	value = value - (5 * x1 * x1 * x1); 

	value = value - (x1 * x1); 
	value = value +(7 * x1); 

	value = value - 6; 

	return value;
}