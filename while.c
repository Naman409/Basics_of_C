#include<stdio.h>

int main(){
    int a, index=1;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    while (a>=index)
    {
        printf("%d\n",index);
        index=index+1;
    }
    return 0;
}