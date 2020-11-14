#include <stdio.h>

int practice_1(int num)
{
    int i, j;
    for (i = 0; i < num; ++i)
    {
        for (j = 0; j < num; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}

int practice_2(int num)
{
    int i, j;
    for (i = 0; i < num; ++i)
    {
        if (i == 0 || i == num - 1)
        {
            for (j = 0; j < num; ++j)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for (j = 1; j < num - 1; ++j)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int num;
    printf("please enter the len of square: ");
    scanf("%d", &num);
    practice_2(num);
    return 0;
}
