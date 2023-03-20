#include <stdio.h>
#include <math.h>

int main()
{

    int number;
    int count = 0;

    printf("Enter Number: ");
    scanf("%i", &number);

    if(number == 0)
    {
        count = 1;
    }
    else{
        count = log10(number) + 1;
    }
    printf("Number of digit(s) = %i\n", count);
    return 0;
}