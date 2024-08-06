#include <unistd.h>

void putnbr(int num)
{
    if(num > 9)
    {
        putnbr(num / 10);
        num %= 10;
    }
    if(num >= 0 && num <= 9)
    {
        num += 48;
        write(1, &num, 1);
    }
}

int main()
{
    int i;
    i = 1;

    while(i != 101)
    {
        if((i % 3 == 0) && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if(i % 3 == 0)
            write(1, "fizz", 4);
        else if(i % 5 == 0)
            write(1, "buzz", 4);
        else
            putnbr(i);
        i++; 
        write(1, "\n", 1);
    }

}