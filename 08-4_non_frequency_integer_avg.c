#include <stdio.h>
int main()
{
    int num;
    int num_count;
    int num_sum = 0;
    double num_avg;
    printf("Please enter the numbers (0: quit)\n");
    scanf("%d", &num);
    /* while version
    while (num != 0)
    {
        ++num_count;
        num_sum += num;
        scanf("%d", &num);
    }
    */
    for (num_count = 0; num != 0; ++num_count)
    {
        num_sum += num;
        scanf("%d", &num);
    }
    num_avg = (double)num_sum / num_count;
    printf("The total avg is %f, number of count: %d\n", num_avg, num_count);
    return 0;
}