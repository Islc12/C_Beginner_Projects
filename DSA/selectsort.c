#include <stdio.h>

int main () {
	int list[9] = {4, 7, 2, 8, 1, 9, 3, 5, 6};

	// determines size by dividing the length of the array (in bytes) by a single item of the array (in bytes)
	int size = sizeof(list)/sizeof(list[0]);

	// prints the original list	
	printf("O: ");
	for (int i = 0; i < size; ++i) {
		printf("%d ", list[i]);
	}

	// outter loop starts at index 0 and runs until the second to last number, since we dont need to compare a number against itself
	// the start of the outter loop also states that no matter what once we start the first number will be our current index
	for (int i = 0; i < size - 1; ++i) {
		int min = i;

		// inner loop finds our smallest value (or largest if we flip the "if" statement) and assigns the min variable with that index
		for (int j = i + 1; j < size; ++j) {
			if (list[j] < list[min]) {
				min = j;
			}
		}

		// this statement only runs if the minimum index isn't the same as the current index, otherwise it doesn't execute because its unneccessary
		if (min != i) {
			// initializes a temp variable to hold our current value at index i in the list
			int temp = list[i];
			// changes the value at index i to be the value at the index of our lowest number in the list
			list[i] = list[min];
			// finally we set the smallest number that was in our list to the temp number to be used as we progress through the sorting
			list[min] = temp;
		}

		printf("\n%d: ", i + 1);
		for (int k = 0; k < size; ++k) {
			printf("%d ", list[k]);
		}
	}

	printf("\nN: ");
	for (int i = 0; i < 9; ++i) {
		printf("%d ", list[i]);
	}
	return 0;
}