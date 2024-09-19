#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int i = 0;

    int ********pnt8;
    int *******pnt7;
    int ******pnt6;
    int *****pnt5;
    int ****pnt4;
    int ***pnt3;
    int **pnt2;
    int *pnt1;

    pnt8 = &pnt7;
    pnt7 = &pnt6;
    pnt6 = &pnt5;
    pnt5 = &pnt4;
    pnt4 = &pnt3;
    pnt3 = &pnt2;
    pnt2 = &pnt1;
    pnt1 = &i;

    ft_ultimate_ft(&pnt8);
    printf("%d", i);
    return 0;
}
