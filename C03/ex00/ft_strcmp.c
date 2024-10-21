#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

int main(void)
{
    char s1[] = "ue ue sa dit quoi";
    char s2[] = "ue ue sa dit quoi";
    int cmp;
    cmp = ft_strcmp(s1, s2);
    printf("%d", cmp);
    return (0);
}
