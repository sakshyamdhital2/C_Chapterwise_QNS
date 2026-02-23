// Q6. Write a function to replace all negative numbers in array with 0.

#include <stdio.h>


void replace(int arr[], int size) {
    for(int i=0;i<size;i++) {
        if(arr[i] < 0)
            arr[i] = 0;
    }
}

int main() {
    int arr[6] = {5,-3,8,-1,0,-7};

    replace(arr,6);

    for(int i=0;i<6;i++)
        printf("%d ", arr[i]);

    return 0;
}