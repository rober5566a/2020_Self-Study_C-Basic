#include <stdio.h>

/*  Find the total sum of an integer range.
    Create this function for practice function-loop skill.
*/

int sum(int i, int i_max)
{
    int num_sum;
    if (i <= i_max)
    {
        num_sum = sum(i + 1, i_max) + i;
    }
    return num_sum;
}

int main()
{
    int i_min, i_max;
    printf("what's the number of range you what konw: ");
    scanf("%d %d", &i_min, &i_max);
    printf("%d", sum(i_min, i_max));
    return 0;
}