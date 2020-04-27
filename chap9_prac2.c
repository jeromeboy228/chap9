#include <stdio.h>
void chline(char, int, int);
int main(int argc, char const *argv[])
{
    chline('a', 3, 7);
    return 0;
}
void chline(char ch, int start, int end)
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 0; i <= 10; i++)
    {
        if (i >= start && i <= end)
        {
            printf("%c ", ch);
        }
        else
        {
            printf("  ");
        }
        
    }
    printf("\n");
}