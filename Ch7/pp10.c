#include <stdio.h>
#include <ctype.h>

int main(void) {
	printf("Enter a sentence: "); 

	char ch; 
	int number = 0; 

	while ((ch = getchar()) != '\n') {
		switch(toupper(ch)) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				number = number + 1;
				break;

		}

	}

	printf("Your sentence has %d vowels\n", number);


}

