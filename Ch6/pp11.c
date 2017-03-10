#include <stdio.h>

int main(void) {
	printf("Type the number n to which calculate value e: "); 

	double n;
	scanf("%lf", &n);

	long double e = 1;
	double factorial = 1; 

	for (int i = 1; i <= n; i++) {
		factorial = factorial *i; 

		printf("Value of e is %.50Lf\n", e);
		e = e + 1.0/factorial;
	}

	printf("E is %.50Lf\n", e);

}