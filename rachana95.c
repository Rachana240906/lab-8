#include <stdio.h>
#include <string.h>
struct Employee 
{
    int emp_no;
    char emp_name[50];
    float basic_pay;
};
int main() 
{
    struct Employee employ[50];
    struct Employee *ptr;
    int n,i;
    printf("Enter the number of employees (max 50): ");
    scanf("%d", &n);
    ptr = employ;
    for (i = 0; i < n; i++) 
	{
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &(ptr + i)->emp_no);
        printf("Employee Name: ");
        scanf(" %[^\n]", (ptr + i)->emp_name);
        printf("Basic Pay: ");
        scanf("%f", &(ptr + i)->basic_pay);
    }
    printf("\nEmployee Details:\n");
    printf("-------------------------------------------------\n");
    printf("%-10s %-20s %-10s\n", "Emp No", "Emp Name", "Basic Pay");
    printf("-------------------------------------------------\n");
    for (i = 0; i < n; i++) 
	{
        printf("%-10d %-20s %-10.2f\n", (ptr + i)->emp_no, (ptr + i)->emp_name, (ptr + i)->basic_pay);
    }
    return 0;
}
