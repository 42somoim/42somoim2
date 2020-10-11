#include <stdio.h>

int main(void)
{
    int c = getchar();
    while (c != -1) {
        printf("%c", (char)c);
        c = getchar();
    }
    return 0;
}