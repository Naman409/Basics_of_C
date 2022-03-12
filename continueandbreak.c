#include<stdio.h>

int main(){

    int i,age;
    for(i=0;i<=4;i++){
        printf("Enter your age : ",i);
        scanf("%d",&age);
        if(age>20){
            // break;
            continue;
        }
        printf("Hello to the person whose age is less than 20\n");
    }
    return 0;
}