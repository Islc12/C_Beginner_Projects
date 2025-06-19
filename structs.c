#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// structs in C
// structs in C can almost be compared to Object Oriented programming in other langauges. Meaning structs can help us with designing a
// structure of generally related items but of different data types. This is a user defined data type.
// We preceed main with our struct

struct Car {
       char Model[20];
       float Price;
       int Horsepower;
       char Color[10];
       bool isFast;
};

    // We can also use typedef to define the datastructure 
typedef struct {
        char Model[20];
        float Price;
        int Cores;
        int Ram;
        bool wifiAdapter;
} Laptop;

int main() {
    // Within main we need to set a initalize our struct. Here I assign it to the variable car1, which we'll use to pull the data. And then
    // I assigned it some data
    struct Car car1 = {"Mustang", 29999.99, 400, "Red", true};

    // After we have a variable that holds our struct we need to begin to initialize the members of the struct. We access members by
    // declaring the variable then a "." followed by the member's name
    printf("%s\n", car1.Model);
    printf("$%.2f\n", car1.Price);
    printf("%d\n", car1.Horsepower);
    printf("%s\n", car1.Color);
    printf("%s\n", (car1.isFast) ? "Very fast" : "Slow as molassas");

    // If we want to declare our struct, but not put anything into it just yet, its best pracice to initialize it with 0, otherwise C will
    // input some weird things that was already stored in those memory blocks
    Laptop laptop1 = {0};
    printf("Enter your laptops model: ");
    // we're using fgets here incase we have any weird two word model laptops, remember scanf doesn't like spaces
    fgets(laptop1.Model, sizeof(laptop1.Model), stdin);
    laptop1.Model[strlen(laptop1.Model) - 1] = '\0';

    printf("Enter the laptop's price: ");
    scanf("%f", &laptop1.Price);
    printf("Enter the number of Cores: ");
    scanf("%d", &laptop1.Cores);
    printf("Enter the amount of Ram: ");
    scanf("%d", &laptop1.Ram);
   
    // This is just how I handled getting the boolean from input, first we declared a char and initalized it to null so that way we wouldn't
    // get any unexpected behavior. From there we started a while loop and said that while our variable isn't 'y' and it isnt 'n' that we'll
    // continue to run the loop, this stops anyone from running the program and bypassing it. From there we ran a print statement and scanf
    // which if the user doesn't input the correct character will continue to popup. Finally we ran a check, if 'y' then this,
    // if 'n' then that. 
    char adapter = '\0';
    while (adapter != 'y' && adapter != 'n') {
        printf("Does your laptop have a wifi adapter? (y/n): ");
        scanf(" %c", &adapter);
        if (adapter == 'y') {
            laptop1.wifiAdapter = true;
        }
        else {
            laptop1.wifiAdapter = false;
        }
    }

    // While obviously not the most readable, we can put all our members in one print statement, they don't have to be called in different
    // print statements or other commands
    printf("Model: %s, Price: $%.2f, Cores: %d, Ram: %d, Wifi Adapter: %s\n", laptop1.Model, laptop1.Price, laptop1.Cores, laptop1.Ram,
                                                                            laptop1.wifiAdapter ? "Yes" : "No");
    

    return 0;
}
