#include <stdio.h>

int main() 
{
    char str[100];
    int i, length = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == '\n') 
		{ 
            str[i] = '\0';
            break;
        }
        length++;
    }
    
    printf("Length of the string: %d\n", length);
    
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) 
	{
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
