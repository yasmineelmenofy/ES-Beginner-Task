/*
 * The statement below is given about the extern storage specifier in C:
 * "An extern storage specifier is used to define a new variable in the scope of a file."
 * Is this statement true or false? Explain your answer.
 * No, the statement is not true because declaring variable as extern means that the variable
 * Will be initialized and defined in another files of the project or another scope so on declaring extern
 * variable no memory is located to it until it defined in another scope or file
 * But it does not define new variable it define already exist variable in another file or another scope
 */

 // Example

 #include <stdio.h>

 int main(){
     extern int x; // only declaring x but it is defining elsewhere in the project
     printf("%d\n",x);
     return 0;
 }

//let that x =10 is defined in another file.c
// so the output will be 10
