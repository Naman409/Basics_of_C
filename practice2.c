
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *s;
    int x=0,index,*arr;
    s=(char*)malloc(sizeof(char)*1000);
    scanf("%s",s);
    
    arr=(int*)calloc(10, sizeof(int));
    
    while (s[x]!='\0') {
        if (s[x]>=0 && s[x]<=9) {
            index=s[x];
            arr[index] = arr[index]+1;
        }
        x++;
        }
        
        for (int i=0; i<=9; i++) {
                printf("%d ",arr[i]);
        }
    
        
    return 0;
}




// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     char *s;
//     s = (char *)malloc(1024 * sizeof(char));
//     scanf("%[^\n]",s);
    
//     int x=0;
//     while (s[x]!='\0') {
//     if (s[x]!=' ') {
//     printf("%c",s[x]);
//     }
//     else {
//     printf("\n");
//     }
//     x++;
//     }
    
    
//     return 0;
// }