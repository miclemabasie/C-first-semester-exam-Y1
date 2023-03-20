#include <stdio.h>

int main(void)
{
    int n = 10;
    int t = n, sum = 0;
    while (t >= 1)
    {
        sum += t;
        t--;
    }
    printf("The fib of %i is %i", n, sum);
    return 0;
}