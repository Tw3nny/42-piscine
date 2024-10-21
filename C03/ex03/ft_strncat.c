#include <stdio.h>

char *ft_strncat(char *dest,char *src, unsigned n)
{
    unsigned int i;
    unsigned int j;
    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char dest[20] = "ue ue ";
    char src[] = "sa dit quoi";
    int n;
    n = 5;
    ft_strncat(dest, src, n);
    printf("%s", dest);
    return (0);
}