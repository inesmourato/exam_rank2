#include <unistd.h>

int main(int argc, char **argv)
{
    char *tmp;

    if(argc == 3)
    {
        tmp = argv[1];
        while(*tmp && *argv[2])
        {   
            while(*tmp == *argv[2] && (*tmp && argv[2]))
            {
                tmp++;
                argv[2]++;
            }
            argv[2]++;
        }
        if(!(*tmp))
        {
            while(*argv[1])
            {
                write(1, argv[1], 1);
                argv[1]++;
            }
        }  
    }
    write(1, "\n", 1);
}