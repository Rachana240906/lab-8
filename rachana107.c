#include <stdio.h>
#include <math.h>
int flip(int number, int n) 
{
    int last_n_digits = number % (int)pow(10, n); 
    int remaining_part = number / (int)pow(10, n); 
    int flipped_last_n = 0;
    while (last_n_digits > 0) 
	{
        flipped_last_n = flipped_last_n * 10 + (last_n_digits % 10);
        last_n_digits /= 10;
    }
    return remaining_part * (int)pow(10, n) + flipped_last_n;
}
int main() 
{
    int number, n;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);
    int result = flip(number, n);
    printf("Result after flipping last %d digits: %d\n", n, result);
    return 0;
}
