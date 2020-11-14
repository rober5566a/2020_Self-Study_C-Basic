#include <stdio.h>
int main()
{
    int num;
    int num_sum = 0;
    printf("Please enter the numbers (0: quit)\n");
    scanf("%d", &num);
    while (num != 0)
    {
        num_sum = num_sum + num;
        scanf("%d", &num);
    }
    printf("The total sum is %d.\n", num_sum);
    return 0;
}