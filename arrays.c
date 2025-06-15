#include <stdio.h>
#include <string.h>

int main() {
	int numbers[] = {10, 20, 30, 40, 50};
	char chars[] = {'a', 'b', 'c', 'd', 'e'};
	char name[] = "Hello there Obi Wan";

	int j = 10;
	printf("The %d character in the character array is %c\n", j, name[j]);

	printf("The size of the array in bytes is: %d\n", sizeof(numbers));
	printf("The size of a single element of the array is: %d\n", sizeof(numbers[0]));
	int arrayLen = sizeof(numbers) / sizeof(numbers[0]);
	printf("The total length of the array is: %d\n", arrayLen);
	for (int i = 0; i < arrayLen; ++i) {
		printf("%d\n", numbers[i]);
	}

	
	for (int i = 0; i < 5; ++i) {
		printf("%c ", chars[i]);
	}
	printf("\n");

	// initalize an empty array you must declare how many elements are in that array
	// By setting the an empty array to 0 you automatically clear out the entire array from any previous values
/*	int scores[5] = {0};

	int size = sizeof(scores) / sizeof(scores[0]);
	printf("Enter the scores below.\n");
	for (int i = 0; i < size; ++i) {
		printf("Score #%d: ", (i + 1));
		scanf("%d", &scores[i]);
	}
	for (int i = 0; i < size; ++i) {
		printf("%d ", scores[i]);
	}
	printf("\n");*/

	// 2D arrays
	// with 2D arrays we must list the number of columns
	// first set of brackets is the row, the second set is the
	int nums[][3] = {{1, 2, 3},
					 {4, 5, 6},
					 {7, 8, 9}};

	// To print an element we must specify the index at both the row and column
	printf("Array element at row 0, column 0: %d\n", nums[0][0]);

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}

	// arrays of strings

	// the second set of straight brackets specifies the number of characters in each element, the first specifies the number of elements
	char meat[][10] = {"beef",
					   "chicken",
					   "pork"};

	// When we create an string array, it essentially looks like this under the hood
	// each character is its own element, and for empty elements they're filled with null (\0) values
	char meats[][10] =	{
		{'b', 'e', 'e', 'f', '\0', '\0', '\0', '\0', '\0', '\0'},
		{'c', 'h', 'i', 'c', 'k', 'e', 'n', '\0', '\0', '\0'},
		{'p', 'o', 'r', 'k', '\0', '\0', '\0', '\0', '\0', '\0'}
	};

	// we can access the array and also replace elements
	// This changes the first index letter in the first element to a 't' making beef 'teef'
	meats[0][0] = 't';
	// this changes the second index letter in the second element to a 'j' making pork 'pojk'
	meats[2][2] = 'j';

	int arraySize = sizeof(meats) / sizeof(meats[0]);
	for (int i = 0; i < arraySize; ++i) {
		printf("%s\n", meats[i]);
	}

	// like other 2d arrays we can collect data from specific elements by specifying row/column in the array
	printf("The character at row 1, column 4 is: %c\n", meats[1][4]);

	// clear 2d array of strings, 3 elements with max of 25 characters each
	char names[3][25] = {0};

	// allows us to modify the number of rows of the array of strings WHERE the array is initalized without having to worry about
	// having to change that same value at other locations
	int rows = sizeof(names) / sizeof(names[0]);

	// looping through taking input to add to a
	for (int i = 0; i < rows; ++i) {
		printf("Enter a name: ");
		fgets(names[i], sizeof(names[i]), stdin);
		names[i][strlen(names[i]) - 1] = '\0';
	}

	for (int i = 0; i < rows; ++i) {
		printf("%s\n", names[i]);
	}

	return 0;
}