/*
 * Explain the difference between dangling and wild pointers.
 *
 * Wild pointers : is the pointer that is declared but not initialized even by null
 * It does not point to any memory location or (invalid memory location)
 * It can not be printed using printf because that will lead to undefined behaviour
 *
 * Dangling pointer : is the pointer that is to a location is had been deleted or removed
 * This will lead to undefined behaviour in c
 * When a memory  is deallocated the pointer becomes a dangling pointer.
 * To remove the Dangling pointer ptr = NULL; this will make the pointer point to nothing

 */

 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int* wild_ptr;
    // printf("Value pointed by 'p' is: %d\n", * wild_ptr);
    // will result undefined behaviour
    wild_ptr = NULL; //solved the problem of wild pointer
    // Dangling pointer
    int* dangling_ptr = (int*) malloc(sizeof(int));  // Dynamically allocate memory
    *dangling_ptr = 60;  // Assigning a value to the allocated memory

    printf("Value that the pointer points to  before free: %d\n", *dangling_ptr);
    free(dangling_ptr);
   // printf("After free the value  is: %d\n", *dangling_ptr);
   // that will cause undefined behaviour

    dangling_ptr = NULL;
    // to solve the problem of dangling pointer
    return 0;
}
