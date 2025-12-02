#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[n];

    for(int i = 0; i < n; i++)
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

    for(int i = 0; i < n; i++)
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);

    return 0;
}
