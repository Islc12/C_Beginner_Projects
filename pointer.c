#include <stdio.h>

// pointers are a variable that stores the memory address of another variable or data structure.
//
void birthday(int* age);

int main() {
    int age = 30;
    printf("You are %d years old\n", age);
    // to print the memory address of a variable we can use %p and the address variable 
    // %p refers to a pointer, and we use the address of operator (&) to return the memory address of the variable
    printf("Memory Address: %p\n", &age);

    // * is a dereference operator, this tells the compiler that we're going to be creating a pointer
    // declaring a variable. Following this we add a 'p', this is common convention, so other people know what we're
    // doing with our code. Another common convention is to capitalize the first letter of our variable, in this case
    // we capitalize the 'A' in our "age" variable. We'll then declare this to the address of our variable age using
    // the address of operator (&)
    int *pAge = &age;

    printf("Pointer Address: %p\n", pAge);
    
    birthday(pAge);

    printf("You are %d years old\n", age);

    return 0;
}

// When working with pointers we need to make sure to pass the pointer as a parameter
void birthday(int* age) {
    // We need to wrap *age in () to tell the program that we need to dereference the variable first and then increment
    // Otherwise the system would try to incremente the memory address of age
    (*age)++;
    
}

/* Another option to creating a pointer is that instead of declaring a pointer in our main function we simply pass in
 * the address of into the parameter of another function
 *
 * void birthday(int* age);
 * 
 * int main() {
 *     int age = 30;
 *     
 *     birthday(&age);
 *
 *     printf("You are %d years old\n", age);
 *
 *     return 0;
 * }
 *
 * void birthday(int* age);
 *     (*age)++;
 * }
*/

