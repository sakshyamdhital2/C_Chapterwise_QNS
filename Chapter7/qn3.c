// Q3. Write a function isPrime(int n) that returns:
// 1 if prime
// 0 if not prime

#include <stdio.h>
#include <math.h>


int isPrime(int n) {
    if(n <= 1)
        return 0;

    for(int i=2; i<=sqrt(n); i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n = 7;

    if(isPrime(n))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}