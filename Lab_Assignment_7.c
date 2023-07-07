#include <stdio.h>
#include <stdlib.h>

int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
int i = 0;
int j = 0;
int size = sizeof(arr) / sizeof(arr[0]);
int temp = 0;

void main(){

for(j=0; j<size; j++){

    int swap_count = 0;

    for(i=0; i<size-1-j; i++){

        if(arr[i]>arr[i+1]){

            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;

            swap_count+=1;
        }
    
    }
    printf("For index %d: %d swaps are needed\n", j, swap_count);

}

}