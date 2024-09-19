#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{

    *div = a / b;
    *mod = a % b;
}

// int main()
// {
//     int a = 17;
//     int b = 5;
//     int div;
//     int mod;

//     ft_div_mod(a, b, &div, &mod);

//     printf("Valor da divisao eh de: %d\n", div);
//     printf("Valor que sobrou eh de: %d\n", mod);

//     return 0;
// }