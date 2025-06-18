#include <stdio.h>

    // typedef is a built in keyword in C that allows you to define the type of item you're working with, this improves code readability
    // and can allow for uniqueness in such a way that limits confusion
    //
    // enums is short for enumeration and in short, is a way we can assign an integer value to a constant.
    
    // when using typedef we follow the syntax "typedef datatype renamed_datatype", we also make sure we put this prior to main
typedef int Numbers;
typedef char String[20];

    // in the above typedef isn't exactly the best thing to use, maybe for replacing an array of characters, but thats situation dependant
    // however for an integer it would be best practice to leave the datatype as int as that is very well understood and readable
    //
    // typedef though is really good for enums as it helps us to define what its really about
typedef enum { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY } Week;
    // notice we put the renamed_dataype at the back of the enum when using typedef
    //
    // we can still use enums without typedef, but it will add a little bit extra to our maincode, potentially reducing code readability
enum Military { Army, Navy, MarineCorps, AirForce };
    // Without using typedef we can name our enum prior to assigning values to it
    //
    // In addition to using the built in integer values we can manually assign values, enum values start at 0 by default, but we can make
    // our own instead by simply assinging them that integer value as we decalre the enum value, these integer values don't have to be in
    // order or have any particular pattern to them if we don't want. Here I'll assign popular interstates to various states
enum Highway { FLORDA = 95, CALIFORNIA = 5, NEVADA = 15, TEXAS = 35, VIRGINIA = 81};

int main() {

    Numbers x = 5;
    String name = "George";

    printf("%d\n", x);
    printf("%s\n", name);

    // enums return an integer value starting at 0, since SUNDAY is the first value in our enum the value returned will be 0
    Week today = SUNDAY;
    printf("%d\n", today);

    // notice the declaration of the enum Military and then giving it a variable to store data of branch
    enum Military branch = MarineCorps;
    printf("%d\n", branch);

    enum Highway interstate = VIRGINIA;
    printf("%d is a popular interstate in Virginia\n", interstate);

    return 0;
}
