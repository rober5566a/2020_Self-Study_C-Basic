#include <stdio.h>

int main()
{
    char input, output;
    printf("Please enter English letter: ");
    scanf("%c", &input);
    printf("%d\n", input);
    if (input > "A")
    {
        output = input + 32;
    }

    printf("Tranform result: %c\n", output);
    return 0;
}