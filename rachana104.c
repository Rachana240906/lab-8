#include <stdio.h>
enum Color 
{
    RED = 0xFF0000,      
    GREEN = 0x00FF00,    
    BLUE = 0x0000FF,     
    YELLOW = 0xFFFF00,   
    CYAN = 0x00FFFF,      
    MAGENTA = 0xFF00FF  
};
int main() 
{
    enum Color color;
    printf("Enter a color (0 for RED, 1 for GREEN, 2 for BLUE, 3 for YELLOW, 4 for CYAN, 5 for MAGENTA): ");
    scanf("%d", &color);
    switch(color) 
	{
        case RED:
            printf("The hexadecimal code for RED is: #FF0000\n");
            break;
        case GREEN:
            printf("The hexadecimal code for GREEN is: #00FF00\n");
            break;
        case BLUE:
            printf("The hexadecimal code for BLUE is: #0000FF\n");
            break;
        case YELLOW:
            printf("The hexadecimal code for YELLOW is: #FFFF00\n");
            break;
        case CYAN:
            printf("The hexadecimal code for CYAN is: #00FFFF\n");
            break;
        case MAGENTA:
            printf("The hexadecimal code for MAGENTA is: #FF00FF\n");
            break;
        default:
            printf("Invalid color choice.\n");
            break;
    }
    return 0;
}
