#include <stdio.h>

int min(int a, int b)
{
    return a <= b ? a : b;
}

int main(void)
{
    int n;
    int memo[1000001] = { 0, };
    scanf("%d", &n);

    for (int i = 2; i <= n; ++i) {
        memo[i] = memo[i - 1] + 1;
        if (i % 2 == 0) {
            memo[i] = min(memo[i], memo[i / 2] + 1);
        }
        if (i % 3 == 0) {
            memo[i] = min(memo[i], memo[i / 3] + 1);
        }
    }
    printf("%d\n", memo[n]);

    return 0;
}
