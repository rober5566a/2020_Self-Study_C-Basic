#include <stdio.h>
#include <time.h>
// #include "Function/random.c"
#include <stdlib.h>
int main()
{
    int dots[6] = {0};
    int num_dot;
    srand(time(0));
    for (int i = 0; i < 6000; ++i)
    {
        num_dot = rand() % 6;
        ++dots[num_dot];
    }
    for (int i = 0; i < 6; ++i)
    {
        printf("dot %d: %d\n", i + 1, dots[i]);
    }
    return 0;
}
