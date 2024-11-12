#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *fptr;
    struct Student students[5], readStudents[5];
    int i;


    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }


    fptr = fopen("students.dat", "wb");
    fwrite(students, sizeof(struct Student), 5, fptr);
    fclose(fptr);


    fptr = fopen("students.dat", "rb");
    fread(readStudents, sizeof(struct Student), 5, fptr);
    fclose(fptr);


    printf("\nData read from file:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s\tMarks: %d\n", readStudents[i].name, readStudents[i].marks);
    }

    return 0;
}
