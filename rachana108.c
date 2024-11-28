#include <stdio.h>
void copy_string(char *source, char *destination) 
{
    while (*source != '\0') 
	{
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}
int compare_strings(char *str1, char *str2) 
{
    while (*str1 != '\0' && *str2 != '\0') 
	{
        if (*str1 != *str2) 
		{
            return 0;  
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0'); 
}
void concatenate_strings(char *str1, char *str2, char *result) 
{
    while (*str1 != '\0') 
	{
        *result = *str1;
        str1++;
        result++;
    }
    while (*str2 != '\0') 
	{
        *result = *str2;
        str2++;
        result++;
    }
    *result = '\0'; 
}
void reverse_string(char *str) 
{
    char *start = str;
    char *end = str;
    char temp;
    while (*end != '\0') 
	{
        end++;
    }
    end--;
    while (start < end) 
	{
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() 
{
    char str1[100], str2[100], result[200];
    int cmp_result;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    char copy[100];
    copy_string(str1, copy);
    printf("\nCopy of first string: %s\n", copy);
    cmp_result = compare_strings(str1, str2);
    if (cmp_result) 
	{
        printf("The two strings are equal.\n");
    } 
	else 
	{
        printf("The two strings are not equal.\n");
    }
    concatenate_strings(str1, str2, result);
    printf("\nConcatenated string: %s\n", result);
    reverse_string(str1);
    printf("\nReversed first string: %s\n", str1);
    return 0;
}
