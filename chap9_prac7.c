#include <stdio.h>

int main(int argc, char const *argv[])
{
    char r;
    while ((r=getchar())!=EOF)
    {
        putchar(r);
    }
    
    return 0;
}
