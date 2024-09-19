#include <stdio.h>

void ft_ultimate_div_mod(int *div, int *mod)
{
    int a = *div;
    int b = *mod;

    *div = a / b;
    *mod = a % b;
}

// int main()
// {
//     int a = 17;
//     int b = 5;

//     ft_ultimate_div_mod(&a, &b);

//     printf("Valor da divisao eh de: %d\n", a);
//     printf("Valor que sobrou eh de: %d\n", b);

//     return 0;
// }