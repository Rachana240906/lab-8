#include <stdio.h>
int main() 
{
    int a = 10; 
    int *ptr = &a;  
    printf("Before modification:\n");
    printf("Value of a: %d\n", a); 
    *ptr = 20;
    printf("\nAfter modification:\n");
    printf("Value of a: %d\n", a); 
    return 0;
}
