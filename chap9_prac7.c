#include <stdio.h>

int main(int argc, char const *argv[])
{
    char r;
    while ((r=getchar())!=EOF)
    {
        if (r==' ')
        {
            printf("_");
            continue;
        }
        
        printf("%c = %d  ",r,r);
    }
    
    return 0;
}
