#include <stdio.h>

/*
Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position
in a sorted portion of the list. It is like sorting playing cards in your hands. You split the cards into two groups: the sorted cards and
the unsorted cards. Then, you pick a card from the unsorted group and put it in the right place in the sorted group.

   - We start with the second element of the array as the first element is assumed to be sorted.
   - Compare the second element with the first element if the second element is smaller then swap them.
   - Move to the third element, compare it with the first two elements, and put it in its correct position
   - Repeat until the entire array is sorted.

https://www.geeksforgeeks.org/dsa/insertion-sort-algorithm/
*/

int main() {
    int list[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(list) / sizeof(list[0]);
    
    for (int i = 0; i < size; ++i) {
        printf("%d ", list[i]);
    }
    printf("\n");
    
    for (int i = 1; i < size; ++i) {
        // The first thing we do at the beginnig of each loop is assign the current value we're comparing to previous to a temp variable.
        // This will allow us to sort previous numbers without having to reassign each time
        int temp = list[i];
        // initializes the start of where we're going to be comparing numbers, we start from one index before our current index.
        int j = i - 1;

        // j >= 0 prevents us from decrementing lower than the first index (index 0) in our list since each iteration of the while loop
        // we decrement j by 1. This could cause of us to access out of bound memory.
        // list[j] > temp checks to see if the current value is less than the previous one, if it is then it moves the previous value up
        // and then it checks on the value before that (if it exists).
        while (j >= 0 && list[j] > temp) {
            list[j + 1] = list[j];
            j--;
        }
        // This now assigns where the while loop ended with the current value we're comparing against.
        list[j + 1] = temp;
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", list[i]);
    }

    return 0;
}
