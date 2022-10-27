#include <stdio.h>

int main()
{
    printf("Name : Ojas\nRoll no : 1359\n\n");
    int x, y, length;
    printf("Enter the x co-ordinate of the bottom left vertex\n");
    scanf("%d", &x);
    printf("Enter the y co-ordinate of the bottom left vertex\n");
    scanf("%d", &y);
    printf("Enter the length of the room\n");
    scanf("%d", &length);
    printf("The centre of the room is (%d,%d)\n", (length / 2) + x, (length / 2) + y);
    return 0;
}