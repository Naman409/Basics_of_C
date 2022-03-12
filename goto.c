#include <stdio.h>

int main(){
    int i , age;
    for(i=0;i<=5;i++){
        printf("Enter your age : ");
        scanf("%d",&age);
            if(age<=18){
                goto end;
            }
            else{
                printf("You can vote\n");
            }
    }
    end:
    return 0;
}