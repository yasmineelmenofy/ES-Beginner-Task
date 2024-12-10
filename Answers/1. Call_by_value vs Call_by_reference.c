/*
 * What is the difference between call by value and call by reference?
 *
 * Call by value: In call by value The Actual parameters (Arguments) will be copied to the formal
 * parameters and these two parameters will have different locations so that method of calling will
 * requires more memory and the changes that happens to the formal will not be reflected to the actual
 *
 * Call by reference : In call by reference We just pass the address of The  Argument , and the formal
 * parameter is a pointer that refers to the same memory location so any changes that made to the formal
 * parameter is reflected to the Actual parameter
 *
 */

// Here is a Code that demonstrates the difference between calling by value and calling by reference

#include <stdio.h>

void Fun_by_value(int n1, int n2) {
    n1=3;
    n2=4;
    printf("Inside Fun_by_value: n1 = %d, n2 = %d\n", n1, n2);

}

void Fun_by_refer(int *p1 , int *p2){
    *p1 = 3;
    *p2 = 4;
    printf("Inside Fun_by_refer: *p1 = %d, *p2 = %d\n", *p1, *p2);
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before Calling the function : num1 = %d, num2 = %d\n", num1, num2);
    Fun_by_value(num1, num2);
    printf("After  Calling the function of passing by value : num1 = %d, num2 = %d\n", num1, num2);// the changes that happens in the formal arguments did not reflected here
    Fun_by_refer(&num1 ,&num2);
    printf("After  Calling the function of passing by reference : num1 = %d, num2 = %d\n", num1, num2);// the changes that happens in the formal arguments reflect to the actual
    return 0;
}

