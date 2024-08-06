#include <unistd.h>
#include <stdio.h>

int repeat_times(char c)
{
    int counter;

    if(c >= 'a' && c <= 'z')
        counter = c - 'a' + 1;
    else if(c >= 'A' && c <= 'Z')
        counter = c - 'A' + 1;
    else 
        counter = 1;
    return(counter);
}

int main(int argc, char **argv)
{
    int i;
    i = 0;
    int times;

    if(argc == 2)
    {
        while(argv[1][i])
        {
            times = repeat_times(argv[1][i]);
                while(times != 0)
                {
                    write(1, &argv[1][i], 1);
                    times--;
                }
            i++;
        }
    }
    write(1, "\n", 1);
}