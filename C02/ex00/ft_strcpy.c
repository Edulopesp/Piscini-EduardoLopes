#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;

    while (src[i] != '\0')
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
//     ft_strcpy(dest, src);

//     printf("A str copiada fica assim: %s \n", dest);
// }