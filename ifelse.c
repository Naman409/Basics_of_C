#include <stdio.h>

int main(){

    int age;
    printf("Enter your age : ");

    scanf("%d",&age);
    printf("Your age is %d\n",age);

    if (age>18)
    {
        printf("You can vote");
    }
    else if(age==18){
        printf("Hey!!You are allowed to vote too");
    }
    else{
        printf("Sorry chotu , you are not allowed to vote");
    }
    
    return 0;
}