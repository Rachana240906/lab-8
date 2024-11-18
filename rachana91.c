#include <stdio.h>
void SqCube(int *num, int *square, int *cube) 
{
    *square = (*num) * (*num);  
    *cube = (*num) * (*num) * (*num);
}

int main() 
{
    int number, square, cube;
    int *ptr = &number;
    printf("Enter a number: ");
    scanf("%d", ptr);
    SqCube(ptr, &square, &cube);
    printf("Entered Number: %d\n", *ptr);
    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);
    return 0;
}
