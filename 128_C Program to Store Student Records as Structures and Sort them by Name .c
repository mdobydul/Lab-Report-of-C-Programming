#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[n], temp;

    for(int i = 0; i < n; i++)
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);

    return 0;
}
