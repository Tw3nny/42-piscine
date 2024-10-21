#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int main(void)
{
    char s1[] = "ue ue sa dit quoi";
    char s2[] = "ue ue sa dit quoi";
    int n;
    int cmp;
    n = 5;
    cmp = ft_strncmp(s1, s2, n);
    printf("%d", cmp);
    return (0);

}