#include <stdio.h>

int main(void)
{
    int i = 0;
    int mulx, muly;
    int found = 0, x = 10, y = 25;
    if (x < y)
    {
        mulx = x;
        muly = y;
    }
    else
    {
        muly = x;
        mulx = y;
    }
    int arr[200];
    int value = 0;
    while (found == 0)
    {
        mulx += x;
        muly += y;
        arr[i] = muly;
        for (int j = 0; j < i + 1; j++)
        {
            if (mulx == arr[j])
            {
                value = mulx;
                found = 1;
                break;
            }
        }
        i++;
    }
    int val1, val2;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            val1 = i;
        }
    }

    for (int i = 1; i < y; i++)
    {
        if (x % i == 0)
        {
            val2 = i;
        }
    }

    if (val1 < val1)
    {
        printf("Greatest common divisor is: %i", val1);
    }
    else
    {
        printf("Greatest common divisor is: %i", val2);
    }

    printf("The value is: %i", value);
    return 0;
}
