#include <stdio.h>
<<<<<<< HEAD
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
    
=======
int min(int, int);
int main()
{
    int num1, num2;
    printf("Введите два числа или q для выхода\n");
    while (scanf("%d%d", &num1, &num2) == 2)
    {
        printf("из %d и %d меньшее %d\n",num1,num2,min(num1,num2));
        printf("Введите два числа или q для выхода\n");
    }
    return 0;
}

int min(int n1, int n2){
    if (n1>n2)
    {
        return n2;
    }
    return n1;
>>>>>>> f9cbcf8a45d5d2d4ed4b561ba6302fc0d85771f6
}