#include<stdio.h>

int add(int,int,int*);

int main(){
    int a=5;
    int b=3;
    int d;
    int c=add(a,b,&d);
    printf("%d\n",c);
    printf("%d\n",d);

    return 0;
}

int add(int a,int b,int *p){
    *p = a-b;
    return a+b;
}