#include <stdio.h>

int main(void)
{
    int i, a, b;
    scanf("%d", &i);
    
    while(i-- != 0) {
        char c;
        scanf("%d %c %d", &a, &c, &b);
        printf("%d\n", a + b);
    }
    return 0;
}