#include <stdio.h>

int main()
{

    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    switch (age)
    {
    case 10:
        printf("Your age is 10");
        break;
    case 20:
        printf("Your age is 20");
        break;
    case 30:
        printf("Your age is 30");
        break;

    default:
        printf("Your age is not 10,20 or 30");
        break;
    }
}