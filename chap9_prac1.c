#include <stdio.h>

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
}