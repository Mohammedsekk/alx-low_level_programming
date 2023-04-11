#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[]) 
{
    if (argc == 1) 
    { 
        printf("0\n"); 
        return 0;
    }
    
    int sum = 0;
    for (int i = 1; i < argc; i++) 
    {
        if (!isdigit(*argv[i])) 
        { 
            printf("Error\n");
            return 1;
        }
        sum += atoi(argv[i]); 
    }
    
    printf("%d\n", sum); 
    
    return 0;
}

