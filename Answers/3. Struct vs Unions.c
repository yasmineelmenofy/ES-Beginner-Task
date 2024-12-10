/*
 * What is the difference between struct and union in C?
 *
 * Struct
 * Struct (Structures) : it is a user defined data type it used to
 * group elements that has different data types into a single data type
 * Memory Allocation : each member exist in the struct has it's own memory
 * All the member of the struct can be accessed
 * IN the struct the different variables of different data type are independent
 * The size of the struct is the sum of the size of all variables inside it
 *
 * Unions
 * Union : It is also a user defined data type but unlike struct
 * Union Members share the same memory location
 * so the changes that made to one number is reflected to another Members as well
 * The size of the Union is the size of the variable that has the largest data type on it
 * only one member of the union can hold a value at a time
 * We can access the members using pointers
 * Unions: Used when you need a variable to hold multiple types of data, but only one type at a time.
 *
 */
#include <stdio.h>
typedef struct {
    char *color;
    char *engine;
    int seating_capacity;
} Car;


typedef union {
    char a;
    int b;
} Ab;

int main() {
    Car myCar;
    myCar.color = "Blue";
    myCar.engine = "V8";
    myCar.seating_capacity = 5;

    printf("Struct :\n");
    printf("Color: %s\n", myCar.color);
    printf("Engine: %s\n", myCar.engine);
    printf("Seating Capacity: %d\n\n", myCar.seating_capacity);

    Ab Union;
    Union.a = 'Y';
    printf("Union (before overwriting):\n");
    printf("value of character: %c\n", Union.a);
    Union.b = 24;
    printf("value of integer  : %d\n", Union.b);
    printf("value of the character after overwritting: %c\n", Union.a);

    return 0;
}
