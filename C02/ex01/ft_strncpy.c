#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;

    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}

// int main()
// {
//     char src[] = "Fala cmg bb!";
//     char dest[15];
//     int n = 8;
//     ft_strncpy(dest, src, n);

//     printf("A str copiada fica assim: %s \n", dest);
// }