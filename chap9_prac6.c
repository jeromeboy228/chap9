#include <stdio.h>
void swap(double *,double *,double *);

int main(int argc, char const *argv[])
{
    double n1,n2,n3;
printf("Введите 3 значения для обработки\n");
scanf("%lf %lf %lf",&n1,&n2,&n3);
printf("%.2lf %.2lf %.2lf\n",n1,n2,n3);
swap(&n1,&n2,&n3);
    return 0;
}

void swap(double * n1,double *n2,double *n3){

}