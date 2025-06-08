#include <stdio.h>

void wavePattern();
void starTriangle();
void palindromePyramid();
void doLoop();

int main() {
	wavePattern();
	starTriangle();
	palindromePyramid();
	doLoop();

	return 0;
}

void wavePattern() {
/*
	i starts at the 0 position, and increments through each iteration until its equal to row
	the first thing each iteration of the first for loop does is start the second for loop
	j starts at position 0; and it goes until its equal to i (which is incremented by the outside loop)
	each iteration of j prints "*" and then increments j by 1
	after the inner loop executes a newline is printed and the outter loop starts all over again
*/
	int row = 9;
	int x = 0;
	char a = '*';

	// creates a vertical wave pattern
	while (x != 2) {
		for (int i = 0; i < row; ++i) {
			for (int j = row; j > i; --j) {
				printf("%c", a);
			}
			printf("\n");
		}
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j <= i; ++j) {
				printf("%c", a);
			}
			printf("\n");
		}
		++x;
	}
	printf("\n");
}

void starTriangle(){
	char star[] = "* ";
	int row = 5;
	int j = 0; // declare j outside the loops otherwise it must be declared each time

	// Create a simple triangle with '*' characters
	for (int i = 0; i < row; ++ i) {
		for (j = 1; j < (row - i); ++j) {
			printf(" ");
		}
		for (j = 0; j <= i; ++j) {
			printf("%s", star);
		}
		// creates a second set of spaces to "fill" the triangle in after its made, essentially restarting
		for (j = 1; j < (row - i); ++j) {
			printf(" ");
		}
		// creates a set of spaces in order to start the next triangle
		for (j = 1; j < (row - i); ++j) {
			printf(" ");
		}
		for (j = 0; j <= i; ++j) {
			printf("%s", star);
		}
		printf("\n");
	}
	printf("\n");
}

void palindromePyramid() {
		/* Palindrome Pyramid pattern
		____1
		___212
		__32123
		_4321234
		543212345
	*/

	int j = 0;
	int row = 5;

	for (int i = 0; i < row; ++i) {
		// responsible for adding appropriate spaces before the numbers start
		for (j = 1; j < (row - i); ++j) {
			printf("  ");
		}
		// responsible for providing the first half of the numbers and working downwards
		for (j = (i + 1); j >= 1; --j) {
			printf("%d ", j);
		}
		// responsible for providing the second half of the numbers working back up
		for (j = 2; j <= (i + 1); ++j) {
				printf("%d ", j);
		}
		printf("\n");
	}
}

void doLoop() {
	printf("\n");
	int number = 0;
	printf("This is a do loop. It checks the value AFTER the loop runs through rather than before.\n");
	do{
		printf("We're going to print this 1 time even though our condition and while loop value is both 0.\n");
		number++;
	}while(number < 0);

}