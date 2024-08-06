#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int max;

    if(len > 0)
    {
        max = tab[--len];
        while(len--)
        {
            if(tab[len] > max)
                max = tab[len];
        }
        return(max);
    }
    return(0);
}

int main(void)
{
    int s[3] = {1, 33, 3};

    int i = max(s, 3);

    printf("%d", i);
}