#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], result[101];
    int i, j, k = 0, sum, carry = 0;

    scanf("%s", a);
    scanf("%s", b);

    int len1 = strlen(a);
    int len2 = strlen(b);

    i = len1 - 1;
    j = len2 - 1;

    while(i >= 0 || j >= 0 || carry) {
        sum = carry;
        if(i >= 0) sum += a[i--] - '0';
        if(j >= 0) sum += b[j--] - '0';
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    for(i = k - 1; i >= 0; i--)
        printf("%c", result[i]);
    printf("\n");

    return 0;
}
