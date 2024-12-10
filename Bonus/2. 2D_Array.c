/*
 * - write C code to dynamically allocate memory for a 2D array, take user input for its elements, compute the sum of all elements and finally free the array.
 */


 #include <stdio.h>

 int main(){

    int col =4;
    int row =4;
    int sum =0;
    // Allocate memory to array of pointers
    int **arr = (int **)malloc(row * sizeof(int *));
    // **arr is declaring pointer to pointer of type int
    // the first pointer points to array of pointers
    // the second pointer points to specific row (which is array of integers

    //Allocate memory of each row (each 1D array )
    for (int i = 0; i < row; i++) {
        arr[i] = (int *)malloc(col * sizeof(int));
    }
    //taking the numbers from the user
     for (int i=0; i<4 ;i++){
        for(int j=0; j<4; j++){
            scanf("%d",&arr[i][j]);
            sum+= arr[i][j];
        }
     }
     printf("The sum = %d",sum);

     for (int i = 0; i < row; i++) {
        free(arr[i]);
    }
    free(arr);
 }
