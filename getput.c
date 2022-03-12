

// -------------------- Error Handling in C ----------------------- 
// 1.strerror
// 2.perror

// #include <stdio.h>
// #include <string.h>
// #include <errno.h>

// int main()
// {
//     FILE *fp;

//     fp = fopen("file2.txt", "r");
//     if (fp == NULL)
//     {
//         printf("Error: %s\n", strerror(errno));
//     }

//     return (0);
// }

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(){
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("\nEnter b : ");
    scanf("%d",&b);
    if(b!=0){
    c = a/b;
    }
    else{
        c=0;
    }
    printf("%d",c);

    return 0;
}


// typedef unsigned int roll ;
// char c;
// char s[20];
// int a = 2;

// c = getchar();
// putchar(c);

// gets(s);
// puts(s);

// c = getch();
// putchar(c);

// scanf("%d",&a);
// printf(" Enter the value of A : %d",a);

//    <---------------------------- PREDEFINE MACRO ----------------------->

// printf(__DATE__);
// printf(__TIME__);
// printf(__FILE__);
// printf(__LINE__);
// printf(__STDC__);
// }
