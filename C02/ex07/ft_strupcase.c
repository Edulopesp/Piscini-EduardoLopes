#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    return str;
}

// int main()
// {
//     char str[] = "FaLa CMg Bb";

//     printf("A str comeca assim: %s \n", str);

//     ft_strupcase(str);

//     printf("A str termina assim: %s \n", str);
// }