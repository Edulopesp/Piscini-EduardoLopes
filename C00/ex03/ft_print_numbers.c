#include <unistd.h>

void ft_print_numbers(void)
{
    int num = 0;

    while (num <= 9)
    {
        char digit = num + '0';
        write(1, &digit, 1);
        num++;
    }
}