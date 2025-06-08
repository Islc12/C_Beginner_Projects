#include <stdio.h>

int main() {
	int list[9] = {4, 7, 2, 8, 1, 9, 3, 5, 6};

	printf("Old List: ");
	for (int i = 0; i < 9; ++i) {
		printf("%d ", list[i]);		
	}

	// used to store the temporary value of the larger number
	int temp = 0;

	// Nested for loop allows the program to sort more than once
	// The outside loop determines how many times we'll run through the list of numbers to sort them
	// Changing where the loop starts (i = 2) determines if we choose to sort the entire list or not
	for (int i = 1; i < 9; ++i) {
		// The inside loop handles sorting two numbers as it goes through the list
		// If the first value is larger than the second value it gets stored in the temp variable
		// The first value then becomes the second value (the lower one) and the second value becomes temp (the larger value)
		// No else statement is needed, as continue is implied, but I added it for clarity anyway
		// to change to descending order change if statement to be "if (list[j] < list[j + 1])"
		for (int j = 0; j < (9 - i); ++j) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
			else {
				continue;
			}
		}
	}
	printf("\nNew List: ");
	for (int i = 0; i < 9; ++i) {
		printf("%d ", list[i]);
	}

	return 0;
}