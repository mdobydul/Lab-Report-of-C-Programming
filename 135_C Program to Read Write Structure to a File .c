#include <stdio.h>

struct Student {
    char name[50];
    int id;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student s[n];

    for(int i = 0; i < n; i++)
        scanf("%s %d %f", s[i].name, &s[i].id, &s[i].marks);

    FILE *fp = fopen("students.dat", "wb"); // write in binary mode
    for(int i = 0; i < n; i++)
        fwrite(&s[i], sizeof(struct Student), 1, fp);
    fclose(fp);

    fp = fopen("students.dat", "rb"); // read in binary mode
    struct Student temp;
    while(fread(&temp, sizeof(struct Student), 1, fp))
        printf("%s %d %.2f\n", temp.name, temp.id, temp.marks);
    fclose(fp);

    return 0;
}
