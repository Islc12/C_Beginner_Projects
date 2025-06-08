#include <stdio.h>
#include <string.h>

// functions can be called within other functions, we just have to invoke them correctly
void repeatHappy() {
	printf("Happy birthday to you!\n");
}

// when adding parameters to functions we need to make sure they're in the correct order, we can rename them however!
void happyBirthday(char birthdayKid[], int birthdayAge) {
	repeatHappy();
	repeatHappy();
	printf("Happy birthday dear %s!\n", birthdayKid);
	repeatHappy();
	printf("You are %d years old!\n\n", birthdayAge);
}

int main() {
	char name[20] = "";
	int age = 0;

	printf("Enter you name: ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';

	printf("Enter your age: ");
	scanf("%d", &age);
	printf("\n");

	// If we want to pass information into a function we need to add those parameters when we declare the function
	happyBirthday(name, age);
	happyBirthday(name, age);
	happyBirthday(name, age);

	return 0;
}
