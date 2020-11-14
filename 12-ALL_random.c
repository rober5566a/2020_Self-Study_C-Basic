#include <stdio.h>
#include <time.h>

static unsigned _seed = 1;

int rand(void)
{
    _seed = _seed * 1103515245 + 12345;
    return (unsigned int)(_seed / 65536) % 32768;
}

int srand(unsigned int seed)
{
    /* setting random seed, default=1 */
    _seed = seed;
}

// int main()
// {
//     srand(time(0));
//     for (int i = 1; i < 5; ++i)
//     {
//         printf("%d\n", rand());
//     }
//     return 0;
// }