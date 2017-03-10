#include <stdio.h>

int power(int x, int n);

int main(void) {
	int x, n; 

	printf("Print the values of x and n seperated by commas: ");
	scanf("%d,%d", &x, &n);

	printf("your value is %d\n", power(x, n));  
}


int power(int x, int n) {
	int value = 0; 
	int x1 = x; 
	int n1 = n; 

	if (n1 == 0) {
		return 1;
	}

	if ((n1 % 2) == 0) {
		value = (power(x1, n1/2) * power(x,n1/2));
		printf("Multiplying %d, by %d\n",power(x1, n1/2),power(x1, n1/2));
	} else if ((n1 % 2) == 1) { 
		value = x1 * power(x1, n1-1); 
		printf("Multiplying %d by %d\n", x1, power(x1, n1-1));
	} 
	

	return value; 
}