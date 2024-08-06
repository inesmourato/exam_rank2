#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return (i);
}

int main()
{
    char str[] = "ola";
    int i;

    i = ft_strlen(str);
    printf("%d", i);
}