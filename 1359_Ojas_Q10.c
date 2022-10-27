#include <stdio.h>

int main()
{
    int roll, marks;
    char name[30];
    printf("Name : Ojas\nRoll no : 1359\n\n");
    printf("Enter the roll number of the student\n");
    scanf("%d", &roll);
    printf("Enter the name of student\n");
    scanf("%s", name);
    printf("Enter the total mark of student\n");
    scanf("%d", &marks);
    if (marks >= 95)
    {
        printf("%d %s %d A+", roll, name, marks);
    }
    else if (marks >= 90 && marks < 95)
    {
        printf("%d %s %d A", roll, name, marks);
    }
    else if (marks >= 85 && marks < 90)
    {
        printf("%d %s %d B+", roll, name, marks);
    }
    else if (marks >= 80 && marks < 85)
    {
        printf("%d %s %d B", roll, name, marks);
    }
    else if (marks >= 60 && marks < 80)
    {
        printf("%d %s %d C", roll, name, marks);
    }
    else if (marks > 30 && marks < 60)
    {
        printf("%d %s %d D", roll, name, marks);
    }
    else
    {
        printf("%d %s %d Fail", roll, name, marks);
    }

    return 0;
}