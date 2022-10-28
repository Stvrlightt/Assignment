#include <stdio.h>

int main()
{
    int id, units;
    float bill = 0;
    char z[50];
    printf("Name : Ojas\nRoll no : 1359\n\n");
    printf("Enter the user id of user\n");
    scanf("%d", &id);
    printf("Enter the name of user\n");
    scanf("%s", z);
    printf("Enter the number of units consumed by user\n");
    scanf("%d", &units);
    if (units >= 0 && units <= 100)
    {
        bill = bill + 1 * units;
    }
    else if (units > 100 && units <= 300)
    {
        bill = bill + 2 * units;
    }
    else
    {
        bill = bill + 3 * units;
    }
    if (bill < 50)
    {
        bill = 50;
        printf("%d %s %.2f", id, z, bill);
    }
    else if (bill > 1000)
    {
        bill = bill + 0.15 * bill;
        printf("%d %s %.2f", id, z, bill);
    }

    else
    {
        printf("%d %s %.2f", id, z, bill);
    }

    return 0;
}
