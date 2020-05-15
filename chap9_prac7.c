#include <stdio.h>
#include <ctype.h>
#define alf_start 98
 void scan_file();
int main(int argc, char const *argv[])
{
    char a='a';
    printf("a = %d\n",a);
    printf("буква %c по %d по счету\n",a,alf_start-a);
    scan_file();
    
    return 0;
}
void scan_file(){
    char c;
    while ((c=getchar())!=EOF)
    {
        printf("%c",c);
    }
    
}