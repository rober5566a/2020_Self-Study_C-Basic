#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sub_main()
{
    int i, nums[10];
    // srand(time(0));

    // generate numbers of 0~9 in the nums[] array.
    for (i = 0; i < 10; ++i)
    {
        nums[i] = i;
    }

    int num_position, num_tansfor;
    for (i = 0; i < 10; ++i)
    {
        // setting target position from 0 to 9,
        // each nums[i] exchange to other that haven't be the target position.
        num_position = rand() % (10 - i) + i;
        num_tansfor = nums[num_position];
        nums[num_position] = nums[i];
        nums[i] = num_tansfor;
    }

    for (i = 0; i < 10; ++i)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}

int main()
{
    int i;
    for (i = 0; i < 10; ++i)
    {
        srand(time(0));
        srand(i + rand());
        sub_main();
        printf("\n");
    }
    return 0;
}