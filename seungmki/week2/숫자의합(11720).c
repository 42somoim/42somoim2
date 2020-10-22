#include <stdio.h>

int main(void)
{
    int i, ret;
    char s[101];
    char* p = s;

    ret = 0;
    scanf("%d", &i);
    scanf("%s", s);
    while (--i >= 0) {
        ret += *p - '0';
        p++;
    }
    printf("%d\n", ret);

    return 0;
}