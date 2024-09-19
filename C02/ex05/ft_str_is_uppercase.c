#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] == ' '))
        {
            i++;
        }
        else
            return 0;
    }

    return 1;
}

// int main()
// {
//     char str[] = "FALA CMG";

//     printf("A string retornou: %d \n", ft_str_is_uppercase(str));

//     return 0;
// }