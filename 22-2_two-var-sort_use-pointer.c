#include <stdio.h>

void swape(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

void sort(int *x, int *y)
{
    if (x < y)
    {
        swape(x, y);
    }
}

int main()
{
    int a = 3, b = 5;
    sort(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}