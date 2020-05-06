#include <stdio.h>
void large_of(int *a, int *b);
int main(int argc, char const *argv[])
{
    int first ;
    int second ;
    printf("введтие два числа для сравнения\n");
    scanf("%d %d",&first,&second);
    printf("первое значение = %d \tвторое = %d\n", first, second);
    large_of(&first, &second);
    printf("первое значение = %d \tвторое = %d\n", first, second);    
    return 0;
}

void large_of(int *a, int *b)
{
    if (*a < *b)
    {
        *a = *b;
    }
    else
    *b = *a;
}
