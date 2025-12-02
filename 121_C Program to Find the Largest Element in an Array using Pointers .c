#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], *ptr = arr;
    for(int i = 0; i < n; i++)
        scanf("%d", ptr + i);
    int max = *ptr;
    for(int i = 1; i < n; i++)
        if(*(ptr + i) > max)
            max = *(ptr + i);
    printf("%d\n", max);
    return 0;
}
