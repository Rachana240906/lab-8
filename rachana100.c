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
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    file = fopen("LNMIITSTUDENT.JAVA", "w");
    if (file == NULL) 
	{
        printf("Error opening file.\n");
        return 1;
    }
    for (i = 0; i < n; i++) 
	{
        printf("\nEnter details for student %d:\n", i + 1);
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
    }
    fclose(file);
    printf("\nStudent details have been written to the file 'LNMIITSTUDENT.JAVA'.\n");
    return 0;
}
