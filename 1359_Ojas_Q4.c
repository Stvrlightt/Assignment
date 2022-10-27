#include <stdio.h>

int main()
{
    printf("Name : Ojas\nRoll no : 1359\n\n");
    int cp, r, sp;
    float gain;
    printf("Enter the price he bought the scooter for\n");
    scanf("%d", &cp);
    printf("Enter the amount he spent on repairs\n");
    scanf("%d", &r);
    cp = cp + r;
    printf("Enter the price he sold the scooter for\n");
    scanf("%d", &sp);
    gain = ((((float)sp - ((float)cp)) / (float)cp)) * 100;
    printf("The gain percent is %.2f", gain);
    return 0;
}