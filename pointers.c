#include <stdio.h>

int main(){
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    int *ptr = &a;
    printf("The address of Pointer to a is : %d \n",*ptr);
    

}