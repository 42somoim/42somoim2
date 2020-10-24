#include <stdio.h>

int main(void)
{
    int i, n;
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%d\n", i++);
    }
    return 0;
}