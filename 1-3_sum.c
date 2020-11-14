#include <stdio.h>

int main()
{
    int int_1, int_2;
    int int_sum;
    printf("type first integer: ");
    scanf("%d", &int_1);
    printf("type second integer: ");
    scanf("%d", &int_2);
    int_sum = int_1 + int_2;
    printf("Sum is %d. \n", int_sum);
    return 0;
}