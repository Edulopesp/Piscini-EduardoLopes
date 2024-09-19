#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i, j;
    i = 0;
    j = 0;

    if (to_find[i] == '\0')
    {
        return str;
    }

    while (str[i] != '\0')
    {
        j = 0;

        while (str[i + j] == to_find[j])
        {
            if (to_find[j + 1] == '\0')
            {
                return &str[i];
            }
            j++;
        }
    }
    return NULL;
}

int main()
{
    char str[] = "Fala cmg bb!";
    char to_find[] = "cmg";

    printf("O output eh: %s \n", ft_strstr(str, to_find));

    return 0;
}