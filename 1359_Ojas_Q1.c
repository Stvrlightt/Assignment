#include <stdio.h>

int main()
{
    printf("Name : Ojas\nRoll no : 1359\n\n");
    int n;
    printf("Enter the number which you want to check as EVEN or ODD\n");
    scanf("%d", &n);
    if (n & 1 > 0)
    {
        printf("%d is ODD Number", n);
    }
    else
    {

        printf("%d is EVEN Number", n);
    }

    return 0;
}