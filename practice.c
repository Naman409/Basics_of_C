

// ---------------------------------------------Base and Exponents-------------------------------------------

// #include<stdio.h>

// int main(){
//       int b,p;
//       long ans=1;
//       printf("Enter the value of base : \n");
//       scanf("%d",&b);
//       printf("Enter the value of power : \n");
//       scanf("%d",&p);

//       while(p!=0){
//             ans = ans*b;
//             p--;
//       }
//       printf("Answer is : %d",ans);
//       return 0;
// }

// ---------------------------------------Printing each digit in a new line----------------------------------- 

// #include<stdio.h>

// int main(){
//       int d,x,num,f=1;
//            printf("Enter the number : ");
//            scanf("%d",&x);

//       num=x;
//       while(num>9){
//             f = f*10;
//             num=num/10;
            
//       }
//       num=x;
//       while(f>0){
//             d=num/f;
//             printf("%d\n",d);
//             num = num - (d*f);
//             f = f/10;
//       }

// }

// --------------------------------------Printing each digit reverse in a new line---------------------------------

// #include<stdio.h>

// int main(){
//       int num,rem=0;
//       printf("Enter a number : ");
//       scanf("%d",&num);
//       while(num!=0){
//             rem = num%10;
//             printf("%d\n",rem);
//             num = num/10;
//       }
//       return 0;
// }

//-------------------------------------Digit Counter------------------------------------------------------

// #include <stdio.h>

// int main(){
//       int num,dc=0;
//       printf("Enter the number to find the number of digits : ");
//       scanf("%d",&num);

//       while(num!=0){
//             dc = dc+1;
//             num = num/10;
//       }
//       printf("Number of digits are : %d",dc);

//       return 0;

// }

// ------------------------------------Number Reverse-----------------------------------------------------

// #include <stdio.h>

// int main(){
//       int revno=0,rem=0,num;
//       printf("Enter the number you want to reverse : ");
//       scanf("%d",&num);
//       while(num!=0){
//             rem = num%10;
//             revno = revno*10 + rem;
//             num = num/10;
//       }

//       printf("Reversed number is : %d",revno);

//       return 0;
// }



// ------------------------------- Prime and Composite Number -------------------------------------------

// #include <stdio.h>

// int main()
// {
//       int a, i, divisor = 0;
//       printf("Enter the no to check if the number is prime or composite : ");
//       scanf("%d", &a);
//       if(a<0){
//             printf("Enter positive number");
//       }
//       else if(a==0||a==1){
//             printf("Number is neither prime nor composite");
//       }
//       else{
//       for (i = 1; i <= a; i++)
//       {
//             if (a % i == 0)
//                   divisor = divisor + 1;
//       }

//       if (divisor == 2)
//       {
//             printf("Entered number is prime");
//       }
//       else
//       {
//             printf("Entered number is composite");
//       }
//       }

//       return 0;
// }

// --------------------------------------------File Handling----------------------------------------------------

// #include <stdio.h>

// int main(){
//       FILE *fp;
//       fp = fopen("file1.txt","w");
//       // char ch = ;
//       fputs("Hello",fp);

//       fclose(fp);
// }

//------------------------------------Number Pattern Short Method----------------------------------------------------

// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int len = n*2 - 1;
//     for(int i=0;i<len;i++){
//         for(int j=0;j<len;j++){
//             int min = i < j ? i : j;
//             min = min < len-i ? min : len-i-1;
//             min = min < len-j-1 ? min : len-j-1;
//             printf("%d ", n-min);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// CODE for Number Pattern

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {

//       int n, k;
//       scanf("%d", &n);

//       for (int i = 0; i < n ; i++)
//       {

//             for (int j = 0; j < i; j++)
//             {

//                   printf("%d ", n - j);
//                   k = n - j;
//             }
//             //     printf(" ");

//             for (int j = 0; j < n - i ; j++)
//             {

//                   printf("%d ", n - i);
//             }
//             for (int j = 0; j < n - i - 1; j++)
//             {

//                   printf("%d ", n - i);
//             }
//             //     printf(" ");

//             for (int j = 0; j < i; j++)
//             {

//                   printf("%d ", k + j);
//             }

//             printf("\n");
//       }

//             // printf("\n");

// for (int i = n-2; i >= 0; i--)
//       {

//             for (int j = 0; j < i; j++)
//             {

//                   printf("%d ", n - j);
//                   k = n - j;
//             }
//             //     printf(" ");

//             for (int j = 0; j < n - i ; j++)
//             {

//                   printf("%d ", n - i);
//             }
//             for (int j = 0; j < n - i - 1; j++)
//             {

//                   printf("%d ", n - i);
//             }
//             //     printf(" ");

//             for (int j = 0; j < i; j++)
//             {

//                   printf("%d ", k + j);
//             }

//             printf("\n");
//       }

//       return 0;
// }

// ________________________________________________________________________________________________________________

//     int len = 2*n - 1;

//       for (int i=0; i<len; i++) {
//           for (int j=0; j<len; j++) {
//               for(int k=0;k<len;k++){
//                     if (i==k||j==k||i==len-k-1||j==len-k-1){
//                     printf("%d",n-i);
//               }
//             }
//           }
//           printf("\n");
//       }

// #include<stdio.h>

// int main(){

//       int b, a=2;

//       b=a>1?30:4;
//       printf("%d",b);

//       return 0;

// }

// struct my
// {
//   int a;
//   char c;
//   float f;

// } typedef my;

// union umy
// {
//   int a;
//   char c;
//   float f;

// } typedef umy;

// int main(){
//     my s1 ;
//     // printf("%d",sizeof(s1));

//     umy u1 ;
//     // printf("%d",sizeof(u1));
//     u1.a = 5;
//     printf("%d\n",u1.a);

//     u1.c = '9';
//     printf("%d\n",u1.c);

//     u1.f = 2.3;
//     printf("%f\n",u1.f);

// }

// int fabonrec(int n){
//     if(n==1||n==2){
//       return n-1;
//       }
//     else{
//       return fabonrec(n-1)+fabonrec(n-2);
//     }
// }

// int faboniter(int n){
//     int a=0;
//     int b=1;
//     for(int i=0;i<n-1;i++){
//         b=a+b;
//         a= b-a;
//     }
//     return a;
// }

// int main(){
//     int n;
//     printf("Enter the number on which you need fabonacci series : ");
//     scanf("%d",&n);

//     printf("Fabonacci series on %d number with recursive approach is %d\n",n,fabonrec(n));
//     printf("Fabonacci series on %d number with iterative approach is %d\n",n,faboniter(n));
//     return 0;
// }

// Factorial by recursion

// int factorial(int num){
// if (num==0||num==1)
// {
//     return 1;
// }
// else{
//     return num*factorial(num-1);
// }

// }

// int main(){
//     int num;
//     printf("Enter the number and get its factorial : ");
//     scanf("%d",&num);
//     printf("The factorial of %d is %d",num,factorial(num));
// }

// Celsius Fahrenheit Relationship

// int main(){

//     int cel,fahr;
//     printf("Enter temperature in Celsius : ");
//     scanf("%d",&cel);

//     fahr=(cel*9/5) +32;

//     printf("Value of temperature in Fahrenheit is : %d",fahr);

//     return 0;

// }