#include <stdio.h>

int main()
{
    int sum = 0, mud, num;
    printf("Enter Number: ");
    scanf("%i", &num);

    while (num != 0)
    {
        mud = num % 10;
        sum += mud;
        num /= 10;
    }

    printf("The sum of the number is: %i", sum);

    return 0;
}