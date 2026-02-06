/*Calculate total marks and display average*/

#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float average;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    printf("Total marks = %d\n", total);
    printf("Average marks = %.2f", average);

    return 0;
}
