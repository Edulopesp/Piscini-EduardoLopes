#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i, j;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

// int main()
// {
//     const int size = 6;
//     int tab[size] = {11, 22, 35, 42, 5, 2};

//     printf("A array comeca assim: ");

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", tab[i]);
//     }

//     printf("\n");

//     ft_sort_int_tab(tab, size);

//     printf("E termina assim: ");

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", tab[i]);
//     }

//     printf("\n");

//     return 0;
// }