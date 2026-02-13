// Array Operations

#include <stdio.h>

int main() {
    int arr[7] = {1, 3, 4, 10, 12, 30, 40};
    int i, max, min;

    max = min = arr[0];

    for (i = 1; i < 7; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Array in reverse order:\n");
    for (i = 6; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);

    return 0;
}
