#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // add each element to sum
    }

    average = sum / n;

    printf("Average of all elements = %.2f\n", average);

    return 0;
}
