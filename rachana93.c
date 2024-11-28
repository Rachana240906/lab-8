#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    char *ptr;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    ptr = str;
    while (*ptr != '\0')
	{
        if ((*ptr != ' ' && *ptr != '\n') &&(*(ptr + 1) == ' ' || *(ptr + 1) == '\n' || *(ptr + 1) == '\0')) 
		{
            count++;
    }
        ptr++;
    }
    printf("The number of words in the given string is: %d\n", count);
    return 0;
}
