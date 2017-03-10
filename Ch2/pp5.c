#include <stdio.h>

int main(void) {
	int x = 0; 

	printf("PLease print the value of x: ");
	scanf("%d",&x); 

	int value = (5 * x * x * x * x * x) + (2 * x * x * x * x); 

	printf("The value is: %d\n", value);
}