#include <stdio.h> // used to accept standard input and provide standard output
#include <string.h> // used to help us remove new line after running fgets()

int main() {
	int num = 0; // when not in use its still best practice to initialize variables, otherwise we could potentially access memory if we call them and they're not assigned
	float floater = 0.0f;
	double dbl = 0.0f;
	char c = '\0'; // characters are wrapped with single quotations, using a \0 allows us to initialize a character with a null terminator
	char hello[] = "Hello World"; // strings are just character data types but placed into an array as designated by []
	char input[30] = ""; // the 30 inside the character array means that this will only accept up to 30 bytes or characters of data

	// floats and doubles have a default setting of 6 decimal places, and C will automatically round up any numbers after in the float or double 
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter a floating point number: ");
	scanf("%f", &floater);
	printf("Enter a double: ");
	scanf("%lf", &dbl);
	printf("Enter a character: ");
	scanf(" %c", &c); // add whitespace in front of a formatter with scanf to clear the buffer of anything possibly in front of it
	getchar(); // this function allows us to clear the input buffer of anything including new lines prior to running out fgets() function
	printf("Enter a string: ");
	fgets(input, sizeof(input), stdin); // use fgets() when accepting a string with spaces, scanf thinks white space is new input and wont run it properly
	input[strlen(input) - 1] = '\0'; // used to remove the last line of input from using fgets, and allow us to reassign the last character that we're removing
	// to whatever we want, in this case I used a null terminator to make the last character just disappear from view, but we could make it whatever character we want

	printf("Your number is: %02d\n", num); // note the '02' in the format, this ensures we print a minimum of 2 spaces but we padded the front with 0's
	printf("Your float is: %.2f\n", floater); // note the '.2', this limits our floating point number to 2 decimal places
	printf("Your double is: %.10lf\n", dbl); // f or lf can be used as the format, lf just specifies long float for a longer floating point number
	printf("Your character is: %c\n", c); 
	printf("Your string is: %s\n", input);
	printf("All together now!!! %02d, %.2f, %.10lf, %c, %s\n", num, floater, dbl, c, input); // format specifiers can be run with each other in the same printf statement
	printf("And finally! %s!!!\n", hello); // format specifiers can be run before and after text, use them where you want the associated variable to be placed

	return 0; // gives us a return value for if the program ran successfully or not. after execution we can run echo $? in bash to see if it ran successfully and if so it will echo back 0
	// this can be changed to whatever we want, but standard convention is 0 for successful execution
}