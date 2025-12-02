#include <stdio.h>

int main() {
    int n1, n2, i, j;

    scanf("%d", &n1);
    int arr1[n1];
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    scanf("%d", &n2);
    int arr2[n2];
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Common elements: ");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}
