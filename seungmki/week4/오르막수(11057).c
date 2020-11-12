#include <stdio.h>

int main(void)
{
    int n, i, j, k, sum;
    int memo[1001][10];
    scanf("%d", &n);

    for (i = 0; i < 10; ++i) {
        memo[1][i] = 1;
    }

    for (i = 2; i <= n; ++i) {
        for (j = 0; j < 10; ++j) {
            sum = 0;
            for (k = j; k < 10; ++k) {
                sum += memo[i - 1][k] % 10007;
            }
            memo[i][j] = sum % 10007;
        }
    }

    sum = 0;
    for (i = 0; i < 10; ++i) {
        sum += memo[n][i];
    }
    printf("%d\n", sum % 10007);
    return 0;
}