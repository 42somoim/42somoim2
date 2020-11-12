#include <stdio.h>

int main(void)
{
    int i, a, b;
    int j = 1;
    scanf("%d", &i);
    
    while(j <= i) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", j++, a + b);
    }
    return 0;
}