/*
 * Type Casting : Is converting a value from data type to another data type
 * either be done automatically by the compiler or manually by the programmer.
 *
 * The two types of the Type Casting are:
 * Implicit Type Casting : In that type the compiler changes the data type Automatically
 * when the program forces it to do that
 *
 * Explicit Type Casting: the programmer manually specifies the conversion by using parentheses to cast the value
 * to a desired type, that happens when the program wants to control the Conversion or the Implicit Type Casting
 * is not possible
 */
#include <stdio.h>
int main(){
    int a=3,b=2;
    double c;
    //c = a/b;
    //will result in Output ;1.000000 not 1.5000
    //because a is not double it is an integer
    c = (double)a/b;
    // the casting has higher precedence than division so a is changed to double first (explicit)
    //then the division is done
    // c here consider also b as double not integer so that is implicit  casting
    printf("%lf\n",c);

}
