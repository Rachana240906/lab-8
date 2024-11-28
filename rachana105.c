#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) 
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int left, int right) 
{
	int i;
    if (left == right) 
	{
        printf("%s\n", str);
    } 
	else 
	{
        for (i = left; i <= right; i++) 
		{
            swap((str + left), (str + i)); 
            permute(str, left + 1, right); 
            swap((str + left), (str + i)); 
        }
    }
}
int main() 
{
    char str[] = "ABCD";
    int length = strlen(str);
    printf("The permutations of the string are:\n");
    permute(str, 0, length - 1);
    return 0;
}
