#include <stdio.h>

int main() {
    int n, i, j, total = 0;

    printf("Enter rows: ");
    scanf("%d", &n);

    /* find how many numbers needed */
    total = n * (n + 1) / 2;

    for(i = n; i >= 1; i--) {

        for(j = 1; j <= i; j++) {
            printf("%d ", total);
            total--;
        }

        printf("\n");
    }

    return 0;
}
