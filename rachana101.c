#include <stdio.h>
struct Student 
{
    int roll_number;
    char name[50];
    float total_marks;
};
int main() 
{
    FILE *file;
    struct Student student;
    file = fopen("LNMIITSTUDENT.DAT", "a");
    if (file == NULL) 
	{
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter student details to append to the file:\n");
    printf("Roll Number: ");
    scanf("%d", &student.roll_number);
    printf("Name: ");
    getchar();
    fgets(student.name, sizeof(student.name), stdin);
    printf("Total Marks: ");
    scanf("%f", &student.total_marks);
    fprintf(file, "Roll Number: %d\n", student.roll_number);
    fprintf(file, "Name: %s", student.name);
    fprintf(file, "Total Marks: %.2f\n", student.total_marks);
    fprintf(file, "------------------------\n");
    fclose(file);
    printf("Student details have been appended to the file 'LNMIITSTUDENT.DAT'.\n");
    return 0;
}
