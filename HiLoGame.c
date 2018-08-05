#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	srand(time(0));
	int x = rand() % 100;
	int guesses = 0;
	
	for (int i = 0; i > -1; i++) {

		puts("Guess a number from 1-100");
		int guess = 0;
				
		scanf("%i", &guess);
		
		fflush(stdin);
		if (guess > x) {
			puts("Too high. Guess again.");
			guesses++;
		} else if (guess < x) {
			puts("Too low. Guess again.");
			guesses++;
		} else {
			printf("You are correct. Guesses: %i", guesses);
			guesses++;
			break;
		}
	}

	return 0;
}