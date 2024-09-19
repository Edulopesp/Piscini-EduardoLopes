#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int t;

    while (i < size / 2)
    {
        t = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = t;
        i++;
    }
}

// int main()
// {
//     const int size = 5;
//     int tab[size] = {1, 2, 3, 4, 5};

//     printf("A array comeca assim: ");

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", tab[i]);
//     }

//     printf("\n");

//     ft_rev_int_tab(tab, size);

//     printf("E termina assim: ");

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", tab[i]);
//     }

//     printf("\n");

//     return 0;
// }