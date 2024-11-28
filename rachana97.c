#include <stdio.h>
#include <ctype.h>
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
        char ch = tolower(*ptr);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
            count++;
        }
        ptr++;
    }
    printf("The number of vowels in the string is: %d\n", count);
    return 0;
}
