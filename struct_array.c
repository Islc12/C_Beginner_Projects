#include <stdio.h>

// Stucts are also able to utilized within an Array. If we're dealing with a single struct but doing a lot of data
// it will likely be easier to put that into an array. It can also potentially make our code cleaner. The way we do this
// is very simple, we just wrap our struct data for each array into a set of comma separated {} 

typedef struct {
        char firstInit;
        char lastName[20];
        int Age;
        float GPA;
    } Student;

int main () {
    Student student[] = {
            {'T', "Stark", 34, 3.9},
            {'S', "Rogers", 30, 3.8},
            {'N', "Romanoff", 33, 4.0}
            };

    int size = sizeof(student) / sizeof(student[0]);

    printf("-----------------\n");

    for (int i = 0; i < size; ++i) {
        printf("Name: %c.%s\nAge:  %d\nGPA: %.1f\n", 
                student[i].firstInit, student[i].lastName, student[i].Age, student[i].GPA);
        printf("-----------------\n");
    }

    return 0;
}
        
