#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, search_num, max_num, nums[10];

    printf("<<type 1 number ,and find max number in 10 numbers you setting.>>\n\
            Enter 10 number you like:\n");
    for (i = 0; i < 10; ++i)
    {
        scanf("%d", &nums[i]);
    }
    // TODO: if enter over 10 numbers, the scanf() in while loop will get the number start it from 11th number.

    printf("Start !!\n");
    while (1)
    {
        printf("Search number: ");
        scanf("%d\n", &search_num);
        max_num = -1;
        if (search_num == 0)
        {
            printf("Game Finish!!");
            break;
        }
        for (i = 0; i < 10; ++i)
        {
            if (search_num >= nums[i] && nums[i] > max_num)
            {
                max_num = nums[i];
            }
        }
        printf("The max number in Search number is %d\n", max_num);
    }
    return 0;
}