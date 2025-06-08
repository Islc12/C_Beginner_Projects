#include <stdio.h>

int main() {
	int table = 12;

	for (int i = 1; i <= table; ++i) {
		for (int j = 1; j <= table; ++j) {
			int num = i * j;
			printf("%3d ", num); //added format specifier of 3 to give 3 spaces per character so to make the format pretty
		}
		printf("\n");
	}

	return 0;
}