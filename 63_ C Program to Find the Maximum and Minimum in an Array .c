#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    // input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // input array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // assume first element as max and min
    max = arr[0];
    min = arr[0];

    // find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // output
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
