#include <stdio.h>

// int result = 0; // GLOBAL SCOPE - try to avoid using these

int add(int x, int y){
	int result = x + y;

	return result;
}

int subtract(int x, int y) {
	int result = x - y;
	return result;
}

int main() {
	int x = 5;
	int y = 6;
	//int result = add(3, 4);
	int result = subtract(x, y);


	printf("%d\n", result);

	return 0;
}