#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }

    if (i < n)
    {
        if (s1[i] != '\0')
        {
            return 1;
        }
        else if (s2[i] != '\0')
        {
            return -1;
        }
    }
    return 0;
}

int main()
{
    char s1[] = "Falddddd";
    char s2[] = "Falag";
    int n = 5;

    printf("O output eh: %d \n", ft_strncmp(s1, s2, n));

    return 0;
}