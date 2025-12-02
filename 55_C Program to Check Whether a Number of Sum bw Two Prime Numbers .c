#include <stdio.h>

int isPrime(int n) {
    int i;
    if(n <= 1) return 0;

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num, i, found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; i++) {
        if(isPrime(i) && isPrime(num - i)) {
            printf("%d can be expressed as the sum of %d and %d (both primes)\n", num, i, num - i);
            found = 1;
            break; 
        }
    }

    if(!found) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }

    return 0;
}
