#include <stdio.h>
#include <math.h>

int main()
{
    printf("Name : Ojas\nRoll no : 1359\n\n");
    int n, d = 0, p, temp, n1 = 0, b = 1, r;
    printf("Enter a number\n");
    scanf("%d", &n);
    temp = n;
    while (n)
    {
        n = n / 10;
        d++;
    }

    p = pow(temp, 2);

    for (int i = 0; i < d; i++)
    {
        r = p % 10;
        p /= 10;
        n1 = n1 + b * r;
        b *= 10;
    }

    if ((n1 + p) == temp)
    {
        printf("Kaprekar Number");
    }
    else
    {
        printf("Not a Kaprekar Number");
    }

    return 0;
}