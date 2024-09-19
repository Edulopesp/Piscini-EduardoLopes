#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }

    if (s1[i] != '\0')
    {
        return 1;
    }
    else if (s2[i] != '\0')
    {
        return -1;
    }

    return 0;

    // return (unsigned char)s1[i] - (unsigned char)s2[i]; (isso vai comparar os dois e ja retorna o 1,0,-1)
}

// int main()
// {
//     char s1[] = "Falacmgg";
//     char s2[] = "Falacmg";

//     printf("O output eh: %d \n", ft_strcmp(s1, s2));

//     return 0;
// }