#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int signal = 1;
    int number = 0;

    while(str[i])
    {
        while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
            i++;
        if(str[i] == '-')
        {
            signal = - signal;
        } 
        if(str[i] == '-' || str[i] == '+')
            i++;
        while(str[i] >= '0' && str[i] <= '9')
        {
            number = number * 10 + str[i] - '0';
            i++;
        }
    }
    return(signal * number);
}
