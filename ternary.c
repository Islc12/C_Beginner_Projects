#include <stdio.h>

int main() {
	// ternary operator
    // ternary operator in short is a quick short-hand way of performing an if/else statement
    
    int x = 5;
    int y = 10;
    
    // This statement essentially says if x > y, then return the value of x, otherwise return the value of y.
    // To make it so that way we can call on this easily later we store the value of it in variable max
    int max = (x > y) ? x : y;

    printf("%d\n", max);
    
    /*
    instead of storing the value in a variable we can also just run the ternary operation within a printf statement
    by doing it this way we can save even more space, so long as we only would need this value once, otherwise a
    variable would be the better approach.
    */       
    printf("%d\n", (x > y) ? x : y);

    // we can also return a string instead
    printf("%s\n", (x > y) ? "x is greater than y" : "y is greater than x");

    // booleans can also be used
    bool internet = true;

    printf("%s\n", (internet) ? "online" : "offline");

	return 0;
}
