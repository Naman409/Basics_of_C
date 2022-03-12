#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    char ch1[100];
    fp = fopen("file_handle.txt", "r");
    FILE *fpw = fopen("file.txt", "w");

    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        if (ch >= 97 && ch <= 122)
        {
            printf("%c", ch - 32);
        }
        else
        {

            printf("%c", ch);
        }
        fputc(ch, fpw);
    }
    // while(!feof(fp)){
    //     fgets(ch1,100,fp);
    //     printf("%s",ch1);

    // }

    fclose(fp);
}