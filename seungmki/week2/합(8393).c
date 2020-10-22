#include <stdio.h>

int main(void)
{
    int n, add, number, even;

    scanf("%d", &n);
    add = 1 + n;
    number = n / 2;
    even = n % 2 == 0 ? 1 : 0;

    n = even == 1 ? add * number : add * number + (number + 1);
    printf("%d\n", n);
    return 0;
}