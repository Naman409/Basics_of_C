#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a, c = 0;
    char s[10000];

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        a = s[i];
        if (a > 64 && a < 91)
        {
            c++;
        }
    }

    printf("%d", c + 1);

    return 0;
}
