#include <stdio.h>
#include <stdlib.h>

int* createArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
        arr[i] = i + 1;
    return arr;
}

int main() {
    int n = 5;
    int* ptr = createArray(n);

    for(int i = 0; i < n; i++)
        printf("%d ", ptr[i]);
    printf("\n");

    free(ptr); // free memory
    return 0;
}
