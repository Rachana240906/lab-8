#include <stdio.h>

int main() 
{
    int n,i;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int max = *ptr;
    for (i = 0; i < n; i++) 
	{
        if (*ptr > max) 
		{
            max = *ptr;
        }
        ptr++;
    }
    printf("\nThe largest number in the list is: %d\n", max);
    return 0;
}
