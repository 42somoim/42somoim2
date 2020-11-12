#include <stdio.h>

int main(void)
{
    int i, j, a, b;
    scanf("%d", &i);
    j = 0;
    while (j++ < i) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", j, a, b, a + b);
    }
    return 0;
}