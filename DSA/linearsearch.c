#include <stdio.h>

// A linear search is a simple search that starts at one end of an array and searches though that array element by element
// until the target search is found. A linear search is an extremly simple search that is also exceptionally inefficient with
// large datasets, but does okay with small datasets. A benefit to a linear search is that data does NOT have to be ordered.
// This is because no matter what we're searching through the array one element at a time.
//

int main() {
    int list[100];
    int size = sizeof(list) / sizeof(list[0]);
    for (int i = 0; i < size; ++i) {
        list[i] = i + 1;
    }
    
    int target = 180;
    
    // This is the standard linear search algorithm, its simple, sweet and to the point. Due to its simplicity its hard to messup.
    // We simply iterate through the known bounds of the array, checking if the value of each element is equal to the search target.
    // Once its found we'll break. The for loop takes care of making sure we stay in bounds and increments more appropriately. 
    for (int i = 0; i < size; ++i) {
        if (list[i] == target) {
            printf("Target %d is found!\n", target);
            break;
        }
        else if (list[i] >= size) {
            printf("Target not found\n");
        }
    }
    
    // While not the typical linear search method, this works as well. However it requires more checks, else we could find ourselves
    // searching in an infinite loop. First we must set our goal, we need to run this until our element at list[i] is equal to our
    // search target and if it is the loop is over. Otherwise we're going to increment through our array by 1, then check to make sure
    // that our search area is still in the bounds of our array, and then proceed onto the next iteration. Once we've either found the
    // search target, or reached the bounds of our array, we'll exit the loop and then proceed onto the logic. If we found the target we'll
    // do something with it, otherwise we'll do something else.
    int i = 0;
    while (list[i] != target) {
        ++i;
        if (i >= size) {
            break;
        }
    }
    if (list[i] == target){
        printf("Target found at element %d\n", i);
    }
    else {
        printf("Target not found.\n");
    }

    
    return 0;
}

