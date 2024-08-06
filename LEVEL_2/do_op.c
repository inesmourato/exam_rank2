#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int signal = 1;
    int number = 0;
    int i = 0;

    while(str[i])
    {
        if(str[i] == '-')
        {
            signal = - signal;
            i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
            number = (number * 10) + str[i] - '0';
            i++;
        } 
    }
    return(number * signal);
}

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        if(argv[2][0] == '+')
            printf("%d", ft_atoi(argv[1]) + ft_atoi(argv[3]));
        if(argv[2][0] == '-')
            printf("%d", ft_atoi(argv[1]) - ft_atoi(argv[3]));
        if(argv[2][0] == '*')
            printf("%d", ft_atoi(argv[1]) * ft_atoi(argv[3]));
        if(argv[2][0] == '/')
            printf("%d", ft_atoi(argv[1]) / ft_atoi(argv[3]));
        if(argv[2][0] == '%')
            printf("%d", ft_atoi(argv[1]) % ft_atoi(argv[3]));
    }
    printf("\n");
}