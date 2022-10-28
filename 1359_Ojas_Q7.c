#include <stdio.h>

int main()
{
    int x;
    printf("Name : Ojas\nRoll no : 1359\n\n");
    printf("Enter a number - ");
    scanf("%d", &x);

    int sumDigits = 0, cpy = x;

    while (cpy > 0)
    {
        sumDigits += cpy % 10;
        cpy /= 10;
    }

    int sum = 0, y, factors = 0;
    cpy = x;

    while (cpy > 1)
    {
        for (int y = 2; y <= x; y++)
        {

            if (cpy % y == 0)
            {

                cpy /= y;
                factors++;
                while (y > 0)
                {
                    sum += y % 10;
                    y /= 10;
                }
                sum += y;
                break;
            }
        }
    }

    if (sum == sumDigits && factors > 1)
    {
        printf("%d is a smith number\n", x);
    }
    else
    {
        printf("%d is not a smith number\n", x);
    }
    return 0;
}
