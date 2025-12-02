#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    int age;
};

int main() {
    int n, choice;
    scanf("%d", &n);
    struct Student s[n], temp;

    for(int i = 0; i < n; i++)
        scanf("%s %d %d", s[i].name, &s[i].id, &s[i].age);

    scanf("%d", &choice); // 1 for age, 2 for id

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if((choice == 1 && s[i].age > s[j].age) || 
               (choice == 2 && s[i].id > s[j].id)) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%s %d %d\n", s[i].name, s[i].id, s[i].age);

    return 0;
}
 
