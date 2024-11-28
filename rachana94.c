#include <stdio.h>
#include <string.h>
int main() 
{
    char st[100], rev[100];
    char *ptr1, *ptr2;
    int len, i;
    printf("Enter a string: ");
    fgets(st, sizeof(st), stdin);
    len = strlen(st);
    if (st[len - 1] == '\n')
    {
        st[len - 1] = '\0';
        len--;
    }
    ptr1 = st + len - 1;
    ptr2 = rev;
    for (i = 0; i < len; i++)
	{
        *ptr2 = *ptr1;
        ptr1--;
        ptr2++;
    }
    *ptr2 = '\0';
    printf("Original string: %s\n", st);
    printf("Reversed string: %s\n", rev);
    return 0;
}
