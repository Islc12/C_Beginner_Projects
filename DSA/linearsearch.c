#include <stdio.h>

// A linear search is a simple search that starts at one end of an array and searches though that array element by element
// until the target search is found. A linear search is an extremly simple search that is also exceptionally inefficient with
// large datasets, but does okay with small datasets.
//

int main() {
    int list[1000];
    for (int i = 0; i < 1000; ++i) {
        list[i] = i + 1;
    }

    int target = 800;

    for (int i = 0; i < 1000; ++i) {
        printf("Current element: %d\n", i);
        if (list[i] == target) {
            printf("Target %d is found!\n", target);
            break;
        }
    }

    
    return 0;
}

