#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b && a > c) ? a : (b > c ? b : c);

    printf("Largest = %d", largest);

    return 0;
}
