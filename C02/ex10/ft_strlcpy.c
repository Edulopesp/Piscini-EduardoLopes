#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int sizeSrc, i;
    sizeSrc = 0;
    i = 0;

    while (src[sizeSrc] != '\0')
    {
        sizeSrc++;
    }

    if (size == 0)
        return sizeSrc;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return sizeSrc;
}

int main()
{
    char src[] = "Fala cmg bb!";
    char dest[15];
    int size = 15;

    printf("O tamanho desta string eh: %d \n", ft_strlcpy(dest, src, size));
    printf("E a string copiada fica assim: %s \n", dest);
}