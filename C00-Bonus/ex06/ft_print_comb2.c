#include <unistd.h>

void ft_print_comb2(void)
{
    char a, b, c, d;

    while (a <= '9')
    {
        while (b <= '9')
        {
            while (c <= '9')
            {
                while (d <= '9')
                {
                    ft_write(a, b, c, d);
                    d++;
                }
                c++;
                d = '0';
            }
            b++;
            c = a;
            d = b + 1;
        }
        a++;
        c++;
        b = '0';
        d = '1';
    }
}

int main()
{
    ft_print_comb2();
    write(1, "\n", 1);
    return 0;
}