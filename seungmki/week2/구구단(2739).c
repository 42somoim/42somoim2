#include <stdio.h>

int main(void)
{
    int num;
    int i = 1;
    scanf("%d", &num);

    while (i <= 9) {
        printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}