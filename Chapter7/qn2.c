// Q2. Write a function circleArea(float radius) that calculates area of circle.
// Formula: Area = πr²

#include <stdio.h>

float circleArea(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float r = 5;
    printf("Area = %.2f", circleArea(r));
    return 0;
}