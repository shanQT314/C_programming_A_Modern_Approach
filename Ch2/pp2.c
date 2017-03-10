#include <stdio.h>

int main(void) {
	int radius = 0; 

	printf("Insert the value of the radius: \n");
	scanf("%d", &radius);

	float volume = 4/(3) *3.1415*radius*radius*radius;

	printf("Volume is %.2f\n", volume);
}