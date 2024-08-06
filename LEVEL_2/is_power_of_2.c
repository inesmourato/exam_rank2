#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    if(n == 0)
        return(0);
    while(n % 2 == 0)
        n = n / 2;
    if(n == 1)
        return(1);
    return(0);
}

int main(void)
{
    unsigned int n = 16;

    if(is_power_of_2(n) == 1)
        printf("%d it is ", n);
    else
        printf("%d it's not", n);
}