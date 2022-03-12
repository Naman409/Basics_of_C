#include <stdio.h>

int main(){
    int marks[2][4]={{19,17,13,20},{15,14,20,11}};
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d ",marks[i][j]);
        }
    printf("\n");
    }

}


// int main(){
//     int a;
//     int marks[4]={19,17,13,20};

//     printf("Enter the number of students whose marks should be displayed : ");
//     scanf("%d",&a);

//     printf("The marks of %d students is %d",a,marks[a]);
// }