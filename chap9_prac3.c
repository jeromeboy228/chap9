#include <stdio.h>
void output(char, int, int);

int main(int argc, char const *argv[])
{
    printf("Введите символ и два целых числа\n");
    char ch;
    int n1, n2;

    while (scanf("%c %d %d", &ch, &n1, &n2) == 3)
    {
        output(ch, n1, n2);
    }
    return 0;
}
void output(char ch, int line, int lenstr)
{

    for (int j = 0; j < lenstr; j++)
    {

        for (int i = 0; i < lenstr; i++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}
