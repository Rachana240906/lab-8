#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n],i;
    printf("Enter %d elements of the array:\n", n);
    for(i = 0; i < n; i++)
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    int *ptr1 = arr1;
    int *ptr2 = arr2 + n - 1;
    for (i = 0; i < n; i++) 
	{
        *ptr2 = *ptr1;
        ptr1++;
        ptr2--;
    }
    printf("\nOriginal array (arr1): ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr1[i]);
    }
    printf("\nReversed array (arr2): ");
    for (i = 0; i < n; i++)
	{
        printf("%d ", arr2[i]);
    }
    return 0;
}
