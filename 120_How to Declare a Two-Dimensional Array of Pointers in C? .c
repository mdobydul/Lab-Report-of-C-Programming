#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40;
    
    int *arr[2][2]; // 2x2 array of int pointers

    arr[0][0] = &a;
    arr[0][1] = &b;
    arr[1][0] = &c;
    arr[1][1] = &d;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            printf("%d ", *arr[i][j]); // dereference to get value
        printf("\n");
    }

    return 0;
}
