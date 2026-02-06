// Calculating Depreciation

#include <stdio.h>

int main() {
    float cost, rate, depreciation;

    printf("Enter cost of asset: ");
    scanf("%f", &cost);

    printf("Enter depreciation rate: ");
    scanf("%f", &rate);

    depreciation = (cost * rate) / 100;

    printf("Depreciation = %.2f", depreciation);

    return 0;
}
