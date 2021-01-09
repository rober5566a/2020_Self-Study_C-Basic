#include <stdio.h>

/// There have a huge different between sizeof array in init function and call function.
void diff_sizeof(int v[])
{
    printf("\nif give function array, then the array will not be 'array' type in the function.\n");
    printf("size of int: %zu\n", sizeof(int));
    printf("size of 1 array value: %zu\n", sizeof(v[0]));
    printf("size of 6 values in 1 array: %zu\n", sizeof(v));
    printf("lenght of this array: %zu\n", sizeof(v) / sizeof(v[0]));
    return;
}

int main()
{
    int v[] = {5, 6, 4, 72, 52, 6};
    printf("size of int: %zu\n", sizeof(int));
    printf("size of 1 array value: %zu\n", sizeof(v[0]));
    printf("size of 6 values in 1 array: %zu\n", sizeof(v));
    printf("lenght of this array: %zu\n", sizeof(v) / sizeof(v[0]));
    diff_sizeof(v);
    return 0;
}