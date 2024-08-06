#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return(i);
}

void ft_swap(char *s1, char *s2)
{
    char temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_strlen(str) - 1;

    while(i < len)
    {
        ft_swap(&str[i], &str[len]);
        i++;
        len--;
    }
    return(str);
}

int main(void)
{
    char str[] = "hello";

    ft_strrev(str);

    printf("%s", str);
}