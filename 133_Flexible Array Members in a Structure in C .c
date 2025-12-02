#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    int marks_count;
    int marks[];  // Flexible array member
};

int main() {
    int n, i;
    scanf("%d", &n); // Number of students

    for(int s = 0; s < n; s++) {
        int id, m;
        scanf("%d %d", &id, &m); // Student ID and number of marks

        struct Student *stud = malloc(sizeof(struct Student) + m * sizeof(int));
        stud->id = id;
        stud->marks_count = m;

        for(i = 0; i < m; i++)
            scanf("%d", &stud->marks[i]);

        printf("Student ID: %d, Marks: ", stud->id);
        for(i = 0; i < m; i++)
            printf("%d ", stud->marks[i]);
        printf("\n");

        free(stud);
    }

    return 0;
}
