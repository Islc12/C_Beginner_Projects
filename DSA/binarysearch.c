#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// A binary search is a fast search algorithm that uses a sorted array to find a specific value by dividing the search window in half each
// iteration until the intended value is found. ex target value is '2', list of values is 1,2,3,4,5,6,7,8,9,10. A binary search will start
// at 5, since our target value is less than 5 it disregards everything greater than 5 and cuts its search in half looking at 3. Since 3 is
// still greater than our target value it then cuts the search in half again. This time finding the target value '2'. A binary search has
// a worst case performance of O(log n).
//
//
//Used to help generate a random number we use for our search target
void times() {
    return srand(time(NULL));
}

int main () {
    // This will create an array of integers that we can work with, we'll set the array to 100 values and then use a for loop to add the
    // values in there.
    int array[100];
    for (int i = 0; i < 100; ++i) {
        array[i] = i + 1;
    }
    
    // This isn't neccessary to the search algorithm, it just gives us a random search target each time we run the program. 
    times();
    int target = (rand() % 100) + 1;
    printf("Search target is: %d\n", target);
    printf("--------------\n");

    int min = 0;
    int max = 100;
    int i = 1;

    // a while loop keeps the search going until the target value is found
    // first we need to determine our middle value, and then assign that value to the index of our array
    while (min <= max) {
        int mid = min + (max - min) / 2;
        int value = array[mid];

        // I added this section so we could see how many times this loop goes through and what are search area looks like each time we 
        // loop through
        printf("Current search loop: %d\n", i);
        printf("Min value is %d\n", min);
        printf("Middle value is %d\n", array[mid]);
        printf("Max value is %d\n", max);
        
        // now we determine the logic, depending on whether our current search value is greater than or less than the target determines
        // whether we search the upper or lower half next. We then alter the min or max search area accordingly
        if(value < target) {
            printf("Target is greater than current middle value, searching upper half...\n");
            min = mid + 1;
        }
        else if (value > target) {
            printf("Target is less than current middle value, searching lower half...\n");
            max = mid - 1;
        }
        else {
            printf("Target found\n");
            break;
        }
        printf("--------------\n");
        ++i;
    }

    return 0;
}
