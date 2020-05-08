#include <stdio.h>
void three_pigs(double *, double *, double *);

int main(int argc, char const *argv[])
{
    double n1, n2, n3;
    printf("Введите три переменные для их последующего упорядочивания\n");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    printf("числа для обработки %.2lf %.2lf %.2lf\n", n1, n2, n3);
    three_pigs(&n1, &n2, &n3);
    printf("Ввод значений %.2lf %.2lf %.2lf\n", n1, n2, n3);
    return 0;
}

void three_pigs(double *n1, double *n2, double *n3)
{
    double *temp;
    /*     printf("%lf\n", *n1);
    printf("%p\n", n1); //str 363
 */
    while ((*n1 < *n2) && (*n2 < *n3) && (*n1 < *n3))
    {
        temp = n3;
        n3 = n2;
        n2 = n1;
        n1 = temp;
        three_pigs(n1, n2, n3);
    }
}