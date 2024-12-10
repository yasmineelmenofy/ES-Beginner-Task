/*
 * Write a C program to count the number of even and odd numbers in an array.
 */

 #include <stdio.h>

 int main(){
     int arr[] = {1,2,3,4,5,6,7,8,9,10};
     int size = sizeof(arr)/sizeof(arr[0]);
     int count_odd=0;
     int count_even=0;

     for (int i=0; i<size;i++){
        if((arr[i]%2)==0){
            count_even++;
        }
        else{
            count_odd++;
        }
     }

     printf("There is %d even numbers inside the array\n", count_even);
     printf("There is %d odd numbers  inside the array\n",count_odd);

 }


