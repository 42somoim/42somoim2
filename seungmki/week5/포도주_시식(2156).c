#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int n, i, temp;
    int wine[10001];
    int memo[10001] = { 0, };
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        scanf("%d", &wine[i]);
    }
    memo[1] = wine[1];
    memo[2] = wine[1] + wine[2];

    for (i = 3; i <= n; ++i) {
        temp = max(memo[i - 1], wine[i] + memo[i - 2]);
        memo[i] = max(temp, wine[i] + wine[i - 1] + memo[i - 3]);
    }
    printf("%d\n", memo[n]);
    return 0;
}

/*
#include <stdio.h>

int max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    return c;
}

int main(void)
{
    int n, i;
    int wine[10001];
    long memo[10001] = { 0, };
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        scanf("%d", &wine[i]);
    }

    memo[1] = wine[1];
    memo[2] = wine[1] + wine[2];
    for (i = 3; i <= n; ++i) {
        memo[i] = max(memo[i - 1], wine[i] + memo[i - 2], wine[i] + wine[i - 1] + memo[i - 3]);
    }
    printf("%ld\n", memo[n]);
    return 0;
}
*/