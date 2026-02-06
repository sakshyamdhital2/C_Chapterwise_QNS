#include <stdio.h>

int main() {
    float L, B;
    float area, perimeter;
    const int TWO = 2;   // constant value

    printf("Enter length: ");
    scanf("%f", &L);

    printf("Enter breadth: ");
    scanf("%f", &B);

    area = L * B;
    perimeter = TWO * (L + B);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}