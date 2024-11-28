#include <stdio.h>
#include <string.h>

void sortStrings(char *str[], int n) 
{
    char *temp;
    int i,j;
    for (i = 0; i < n - 1; i++) 
	{
        for (j = i + 1; j < n; j++) 
		{
            if (strcmp(str[i], str[j]) > 0) 
			{
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() 
{
    int n,i;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    char *str[n];
    char buffer[100];
    for (i = 0; i < n; i++) 
	{
        printf("Enter string %d: ", i + 1);
        scanf("%s", buffer);
        str[i] = strdup(buffer);
    }
    sortStrings(str, n);
    printf("\nStrings in ascending order:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%s\n", str[i]);
    }
    return 0;
}
