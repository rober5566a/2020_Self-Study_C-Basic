#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nums[10];

    printf("<<type 1 number ,and find nearest number in 10 numbers you setting.>>\n\
            Enter 10 number you like:\n");
    for (i = 0; i < 10; ++i)
    {
        scanf("%d", &nums[i]);
    }

    //test
    // for (i = 0; i < 10; ++i)
    // {
    //     printf("%d", nums[i]);
    // }

    printf("Start !!\n");
    // TODO: if enter over 10 numbers, the scanf() in while loop will get the number start it from 11th number.

    int search_num, dist_num, nearest_num, dist_min_num;
    while (1)
    {
        printf("Search number: ");
        scanf(" %d", &search_num);

        if (search_num == 0)
        {
            printf("Game Over!!");
            break;
        }
        nearest_num = nums[0];
        dist_min_num = abs(nums[0] - search_num);

        //test
        // printf("%d, %d", nearest_num, dist_min_num);
        for (i = 0; i < 10; ++i)
        {
            dist_num = abs(nums[i] - search_num);
            if (dist_num < dist_min_num || (dist_num == dist_min_num && nums[i] < nearest_num))
            {
                nearest_num = nums[i];
                dist_min_num = dist_num;
            }
        }
        printf("The nearest number is %d\n", nearest_num);
    }
    return 0;
}
