#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d", &b);
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping:  a = %d, b = %d\n", a, b);
    return 0;
}

//have a one more way swap two number is without Using a Temporary Variable

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:  a = %d, b = %d\n", a, b);
    return 0;
}
