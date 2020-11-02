#include <stdio.h>

int main(void)
{
    int n, i;
    long long memo[91];
    scanf("%d", &n);

    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 1;

    for (i = 3; i <= n ; ++i) {
        memo[i] = memo[i - 1] + memo[i - 2];
    }
    printf("%lld\n", memo[n]);

    return 0;
}