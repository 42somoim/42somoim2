#include <stdio.h>

int main(void)
{
    char s[101];
    char* p = s;
    int i = 1;

    scanf("%s", s);
    while (*p != 0) {
        printf("%c", *p);
        if (i % 10 == 0)
            printf("\n");
        p++;
        i++;
    }
    if (i % 10 != 0)
        printf("\n");
    return 0;
}