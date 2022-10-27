#include <stdio.h>

int main()
{
    printf("Name : Ojas\nRoll no : 1359\n\n");
    int n, t, r;
    printf("Enter the number of students in the class\n");
    scanf("%d", &n);
    printf("Enter the number of team you want the students to be divided into\n");
    scanf("%d", &t);
    r = n / t;
    printf("The number of students in each team is %d and left out is %d\n", r, (n % t));
    return 0;
}