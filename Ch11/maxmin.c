/* Finds the largest and smallest elements in an array using functions
 * and pointers 
 */

#include <stdio.h>

#define N 10

void max(int a[], int n, int *max, int *min);

int main(void) {
	int b[N], big, small; 

	printf("Enter %d numbers: ", N); 

	for(int i = 0; i < N; i++) {
		scanf("%d", &b[i]); 

	}

	max(b, N, &big, &small);

	printf("Largest: %d\n", big); 
	printf("Smallest: %d\n", small);
}

void max(int a[], int n, int *max, int *min) {
	int i; 

	*max = *min = a[0]; 

	for(i = 1; i<N; i++) {
		if(a[i] > *max) {
			*max = a[i]; 

		} else if (a[i] < *min) {
			*min = a[i];
		}
	}
}