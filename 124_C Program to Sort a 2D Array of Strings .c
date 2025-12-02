#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char arr[n][100], *ptr[n];
    for(int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
        ptr[i] = arr[i];
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(ptr[i], ptr[j]) > 0) {
                char *temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%s\n", ptr[i]);

    return 0;
}
