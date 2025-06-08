#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Rock, paper, scissors game
int main() {
	srand(time(NULL));
	char userChoice = '\0';
	int max = 3;

	while (true) {
		int randGen = rand() % max;
		printf("Enter the following\n'r' for Rock\n'p' for Paper\n's' for Scissors\nEnter a choice: ");
		scanf(" %c", &userChoice);
		if (randGen == 0 && userChoice == 'r') {
			printf("You win!\n");
			break;
		}
		else if (randGen == 1 && userChoice == 'p') {
			printf("You win!\n");
			break;
		}
		else if (randGen == 2 && userChoice == 's') {
			printf("You win!\n");
			break;
		}
		else {
			printf("You lose try again!\n");
		}
	}
	return 0;
}