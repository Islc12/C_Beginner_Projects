#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// allows us to set the base seed using the current time, we can use an integer in place of time() by simply running srand(int)
void times() {
	return srand(time(NULL));
}

// gives us a random number that falls between a set of values
int dice() {
	times();
	int min = 1;
	int max = 6;

	int randNum = (rand() % max) + min;
	printf("%d\n", randNum);
}

// gives us a random number that is either 1 or 0
void coin() {
	times();
	int randNum = rand() % 2;
	if (randNum == 0) {
		printf("Heads\n");
	}
	else if (randNum == 1) {
		printf("Tails\n");
	}
	else {
		printf("Uh oh\n");
	}
}

/* Allows us to print a random number between two numbers where the min number is greater than 1
max - min + 1 > takes the max number, subtracts the min number to find what we need to modulus by, but then adds 1 so we we cannot
do mod 0. finally we add the min number to the result so that we always recieve a random number between our min and max values
*/
int inBetweener() {
	int min = 500;
	int max = 1000;

	int randNum1 = (rand() % (max - min + 1)) + min;
	int randNum2 = (rand() % (max - min + 1)) + min;
	int randNum3 = (rand() % (max - min + 1)) + min;

	printf("%d %d %d\n", randNum1, randNum2, randNum3);
}

int main() {
	srand(time(NULL));

	// allows us to display the max integer that can be created with the random function
	printf("%d\n", RAND_MAX);  

	// simple way to print a random number
	printf("%d\n", rand()); 

	coin();

	dice();

	inBetweener();

	// simply prints the time showing the complexity of it in relation to developing a psuedo random number
	printf("%d\n", time(NULL));

	return 0;
}