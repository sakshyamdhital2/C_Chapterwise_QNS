// Q4. Write a function that calculates:
// Sum
// Difference
// Product
// Using pointer parameters (Pass by Reference)

#include <stdio.h>


void calculate(int a, int b, int *s, int *d, int *p) {
    *s = a + b;
    *d = a - b;
    *p = a * b;
}

int main() {
    int a=10,b=5,sum,diff,prod;

    calculate(a,b,&sum,&diff,&prod);

    printf("Sum=%d Difference=%d Product=%d", sum, diff, prod);

    return 0;
}