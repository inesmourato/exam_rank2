void ft_putstr(char *str)
{
    int i;
    i = 0;

    while(str[i])
    {
        write(1, &i, 1);
        i++;
    }
}