#include <stdio.h>

void ft_swap(int *pnt, int *pnt2)
{
    int temp = *pnt;
    *pnt = *pnt2;
    *pnt2 = temp;
}

// int main()
// {
//     int a = 4;
//     int b = 2;

//     printf("Antes de trocar: a = %d, b = %d\n", a, b);

//     ft_swap(&a, &b);

//     printf("Depois da troca: a = %d, b = %d\n", a, b);

//     return 0;
// }
