#include <stdio.h>
void min(float, float);
int main(int argc, char const *argv[])
{
    float n1, n2;
    float minim;
    printf("Enter 2 numbers\t");
    while (scanf("%f%f",&n1,&n2) == 2)
    {
        min(n1, n2);
        printf("Enter 2 numbers(or q for escape\t");
    }
    putchar('\n');
    return 0;
}
void min(float a, float b)
{
    if (a>b)
    {
        printf("%.03f меньше\n",b);
    }
    else
    printf("%.03f меньше\n",a);
    
}