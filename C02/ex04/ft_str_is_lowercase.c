#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] == ' '))
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
//     char str[] = "fala cmg";

//     printf("A string retornou: %d \n", ft_str_is_lowercase(str));

//     return 0;
// }