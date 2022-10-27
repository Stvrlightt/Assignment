#include <stdio.h>

int main()
{
    printf("Name : Ojas\nRoll no : 1359\n\n");
    int n, n1, n2;
    printf("Enter the first value\n");
    scanf("%d", &n1);
    printf("Enter the second value\n");
    scanf("%d", &n2);
    printf("Enter the choice from the menu\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("The value after Addition is %d", (n1 + n2));
        break;
    case 2:
        printf("The value after Subtraction is %d", (n1 - n2));
        break;
    case 3:
        printf("The value after Multiplication is %d", (n1 * n2));
        break;
    case 4:
        printf("The value after Divivion is %d", (n1 / n2));
        break;
    default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}