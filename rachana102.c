#include <stdio.h>
#include <ctype.h>
int main() 
{
    FILE *file;
    char ch;
    int char_count = 0, word_count = 0, line_count = 0;
    int in_word = 0;
    file = fopen("input.txt", "r");
    if (file == NULL) 
	{
        printf("Error opening file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) 
	{
        char_count++;
        if (ch == '\n') 
		{
            line_count++;
        }
        if (isspace(ch)) 
		{
            in_word = 0;
        } 
		else if (!in_word) 
		{
            in_word = 1;
            word_count++;
        }
    }
    if (char_count > 0 && ch != '\n') 
	{
        line_count++;
    }
    fclose(file);
    printf("Number of characters: %d\n", char_count);
    printf("Number of words: %d\n", word_count);
    printf("Number of lines: %d\n", line_count);
    return 0;
}
