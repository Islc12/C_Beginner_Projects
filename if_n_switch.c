#include <stdio.h>
#include <math.h>

// gcc if_n_switch.c -o if_n_switch -lm to compile

// we need to declare the data type of variable we're returning
double powers(double num1, double num2) {
	double result = pow(num1, num2);

	return result;
}

int main() {
	char operator = '\0';
	double num1 = 0.0;
	double num2 = 0.0;
	double result = 0.0;

	printf("Welcome to the calculator app!\n");

	printf("Enter the first number: ");
	scanf("%lf", &num1);
	printf("Enter the type of operation you would like to perform (+, -, *, /, ^, r, c, f, %): ");
	scanf(" %c", &operator);	
	printf("Enter the second number: ");
	scanf("%lf", &num2);

	switch(operator){
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if (num2 == 0){
				printf("Cannot divide by zero\n");
				break;
			}
			else {
				result = num1 / num2;
				break;
			}
		case '^':
			result = powers(num1, num2);
			break;
		case 'r':
			num1 = round(num1);
			printf("%.2lf\n", num1);
			num2 = round(num2);
			printf("%.2lf\n", num2);
			break;
		case 'c':
			num1 = ceil(num1);
			num2 = ceil(num2);
			printf("%.2lf\n", num1);
			printf("%.2lf\n", num2);
			break;
		case 'f':
			num1 = floor(num1);
			num2 = floor(num2);
			printf("%.2lf\n", num1);
			printf("%.2lf\n", num2);
			break;
/*		
		To use the absoulte value function we need to work with integers not doubles or floats, I left this in here
		but commented it out so that the program will still work but I can reference back to absolute values later on.
		case 'a':
			num1 = abs(num1);
			num2 = abs(num2);
			printf("%.2lf\n", num1);
			printf("%.2lf\n", num2);
			break;
*/
/*		case '%':
			result = num1 % num2;
			break;*/
		default:
			printf("Invalid operator\n");
			break;
	} 

	printf("Result: %lf\n", result);

	return 0;
}