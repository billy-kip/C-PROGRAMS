

struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *fptr;
    struct Student students[5];
    int i;

    fptr = fopen("students.txt", "w");

    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        fprintf(fptr, "Name: %s\tMarks: %d\n", students[i].name, students[i].marks);
    }

    fclose(fptr);

    return 0;
}
