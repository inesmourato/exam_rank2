#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;

    while(str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return(res);
}

int is_prime(int num)
{
    int i = 2; 

    if(num <= 1)
        return(0);
    while(i * i <= num)
    {
        if(num % i == 0)
            return(0);
        i++;
    }
    return(1);
}

void	put_nbr(int n)
{
    int digit;

    if(n >= 10)
        put_nbr(n / 10);
    digit = n % 10 + 48;
    write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    int num = ft_atoi(argv[1]);
    int sum = 0;

    if(argc == 2)
    {   
        while(num > 0)
        {
            if(is_prime(num))
                sum = sum + num;
            num--;
        }
        put_nbr(sum);
    }
    if(argc != 2)
        write(1, "0", 1);
    write(1, "\n", 1);
}