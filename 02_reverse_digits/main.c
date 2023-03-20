#include <stdio.h>
#include <math.h>

int main()
{
    int num, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%i", &num);

    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number is: %i\n", reverse);
    return 0;
}