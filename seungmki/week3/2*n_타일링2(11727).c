#include <stdio.h>

int main(void)
{
    int n, i;
    int memo[1001];
    scanf("%d", &n);

    memo[1] = 1;
    memo[2] = 3;
    for (i = 3; i <= n; ++i) {
        memo[i] = (memo[i - 1] + memo[i - 2] * 2) % 10007;
    }
    printf("%d\n", memo[n]);

    return 0;
}
