// Deviation About an Average

#include <stdio.h>

int main() {
    float value, average, deviation;

    printf("Enter value: ");
    scanf("%f", &value);

    printf("Enter average: ");
    scanf("%f", &average);

    deviation = value - average;

    printf("Deviation = %.2f", deviation);

    return 0;
}
