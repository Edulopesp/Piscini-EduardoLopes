#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    int nw = 1;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && nw)
        {
            str[i] = str[i] - 32;
            nw = 0;
        }
        else if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        {
            nw = 1;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') && !nw)
        {
            str[i] = str[i] + 32;
        }

        i++;
    }

    return str;
}

// int main()
// {
//     char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

//     printf("A str comeca assim: %s \n", str);

//     ft_strcapitalize(str);

//     printf("A str termina assim: %s \n", str);
// }