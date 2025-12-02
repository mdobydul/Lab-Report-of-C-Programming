#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter height: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {

        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for(j = 1; j <= (2 * i - 1); j++) {
            if(i == n || i == 1) {
                printf("*");
            } else if(j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
