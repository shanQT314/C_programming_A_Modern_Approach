#include <stdio.h>

int check(int x, int y, int n); 

int main(void) {
	int x = 0, y = 0, n = 0; 

	int value = check(x,y,n);
	printf("Value is %d\n", value);
}

int check(int x, int y, int n) {
	if(x > 0 && x < n-1) {
		if (y > 0 && y < n-1) {
			return 1; 
		} else {
			return 0;
		}
	} else {
		return 0;
	}
}