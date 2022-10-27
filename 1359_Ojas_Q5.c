#include <stdio.h>

int main()
{
    int age;
    printf("Name : Ojas\nRoll no : 1359\n\n");
    printf("Enter the age\n");
    scanf("%d", &age);
    if (age >= 0 && age <= 3)
    {
        printf("TODDLER\nALLOWED\n");
    }
    else if (age >= 4 && age <= 12)
    {
        printf("JUNIOR\nALLOWED\n");
    }
    else if (age >= 13 && age <= 17)
    {
        printf("TEENAGER\nALLOWED\n");
    }
    else
    {
        printf("NOT ALLOWED");
    }
    return 0;
}