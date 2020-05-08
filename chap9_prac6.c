#include <stdio.h>
#include <iso646.h>
void swap(double *, double *, double *);

int main(int argc, char const *argv[])
{
    double n1, n2, n3;
    printf("Введите три переменные для их последующего упорядочивания\n");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    printf("числа для обработки %.2lf %.2lf %.2lf\n", n1, n2, n3);
    swap(&n1, &n2, &n3);
    printf("Ввод значений %.2lf %.2lf %.2lf\n", n1, n2, n3);
    return 0;
}

void swap(double *n1, double *n2, double *n3)
{
    double temp;         // мне тут не нужен указатель кароч
    while (!(*n1 < *n2)) // тут просто сравниваю содержимое ячеек(тех что в main)
    {
        temp = *n1; // и просто меняю их местами
        *n1 = *n2;  // те значения на которые указывают
        *n2 = temp; // указатели
        while (!(*n2 < *n3))
        {
            temp = *n3;
            *n3 = *n2;
            *n2 = temp;
        }
    }
    printf("in swap %lf %lf %lf\n", *n1, *n2, *n3);
}