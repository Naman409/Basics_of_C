#include <stdio.h>

int sum(int a,int b){
    return a+b;
}

void printstar(int n){
    for(int i=0;i<n;i++){
        printf("%c",'*');
    }
}

int takenumber(){
    int x ;
    printf("Enter a number : ");
    scanf("%d",&x);
    return x;
}

void text(){
    printf("This is a function without argument and return value");
}

int main(){
    int a,b,c;
    a=14;
    b=16;
    // c=sum(a,b);
    // printstar(10);
    // c= takenumber();
    text();
    // printf("The entered number is %d\n",c);
    // printf("The sum is %d\n",c);
    return 0;
}