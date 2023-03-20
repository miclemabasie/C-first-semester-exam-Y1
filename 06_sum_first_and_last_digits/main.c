#include <stdio.h>

int main(void)
{
    int number, first_digit, last_digit;
    do
    {
        printf("Enter a 4 digit number: ");
        scanf("%i", &number);
    } while (number < 1000 || number > 9999);

    last_digit = number % 10;

    while (number >= 10)
    {
        number /= 10;
    }
    first_digit = number % 10;
    printf("First Number %i\n", first_digit);
    printf("Last Number %i\n", last_digit);

    printf("The sum oof the first and the last number is: %i", first_digit + last_digit);
    return 0;
}