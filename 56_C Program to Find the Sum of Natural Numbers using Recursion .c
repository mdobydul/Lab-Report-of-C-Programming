#include <stdio.h>

int sumNatural(int n) {
    if(n == 0)  // base case
        return 0;
    return n + sumNatural(n - 1);  // recursive call
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of first %d natural numbers is %d\n", num, sumNatural(num));

    return 0;
}
