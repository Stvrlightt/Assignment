#include <stdio.h>

int main()
{
    printf("Name : Ojas\nRoll no : 1359\n\n");

    int n, d, temp, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    temp = n;
    while (n)
    {
        sum = sum + (n % 10);
        n /= 10;
        d++;
    }
    printf("%d", sum);
    for (int i = 1; i <= temp; i++)
    {
    }
    return 0;
}