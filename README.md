#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j <= nb -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

 int main()
 {
     char src[] = "cmg bb!";
     char dest[] = "Fala ";
     int nb = 3;

     ft_strncat(dest, src, nb);
     printf("O output eh: %s \n", dest);

     return 0;
 }
