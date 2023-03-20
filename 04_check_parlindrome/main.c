#include <stdio.h>

/*
    Author: Miclem Abasie
    Purpose: Check if a number is parlindrome(if the reverse of the number is same as original number)
    Date: Jan 26 2023
*/

int main()
{
    /*
        To accomplish this we'll use the reverse function written earlier
        and compare the results with original number
    */
    int number, reverse = 0, remainder, num_copy;

    do
    {
        printf("Enter a positive number of atleast 2 digits: ");
        scanf("%i", &number);

    } while (number < 10);
    num_copy = number;

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    if (reverse == num_copy)
    {
        printf("The number %i is Palindrome.\n", num_copy);
    }
    else
    {
        printf("The number is %i has a reverse of %i, hence not parlindrome.", num_copy, reverse);
    }

    return 0;
}