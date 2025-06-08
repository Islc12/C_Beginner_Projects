#include <stdio.h>
#include <stdbool.h>

// prototype function, allows us to put a main function before the rest of our program
void hello(char name[], int age);
bool ageCheck(int age);

int main() {
	hello("Spongebob", 30);
	if (ageCheck(30)){
		printf("You're old enough\n");
	}
	else {
		printf("You are not old enough\n");
	}

	return 0;
}

void hello(char name[], int age){
	printf("Hello %s\n", name);
	printf("You are %d years old\n", age);
}

bool ageCheck(int age) {
	if (age >= 16) {
		return true;
	}
	else {
		return false;
	}
	/* better way of writing this
	return age >= 16;
	*/
}