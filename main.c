#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_check(const char numbers[]);
unsigned int calculate(const char numbers[]);

int main(int argc, char const *argv[])
{
    char numbers[33];
    unsigned int result = 0;

    printf("Enter the base-2 number (up to 32 bits, e.g. 11010010): ");
    if (scanf("%32s", numbers) != 1)
    {
        return 1;
    }

    if (is_check(numbers))
    {
        result = calculate(numbers);
    }
    else
    {
        return 1;
    }

    printf("Result: %u\n", result);

    return 0;
}

bool is_check(const char numbers[])
{
    for (int i = 0, n = strlen(numbers); i < n; i++)
    {
        if (numbers[i] != '0' && numbers[i] != '1')
        {
            printf("Invalid format!\n");
            return false;
        }
    }
    return true;
}
unsigned int calculate(const char numbers[])
{
    unsigned int result = 0;
    for (int i = 0, n = strlen(numbers); i < n; i++)
    {
        result = (result << 1) | (numbers[i] - '0');
    }
    return result;
}
