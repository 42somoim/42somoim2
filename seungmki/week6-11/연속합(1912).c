#include <stdio.h>

int my_max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int n, i, max;
    int arr[100001];
    int dp[100001];
    scanf("%d", &n);
    
    scanf("%d", &arr[1]);
    max = arr[1];
    dp[0] = 0;
    dp[1] = max;
    for (i = 2; i <= n; ++i) {
        scanf("%d", &arr[i]);
        
        dp[i] = my_max(arr[i], dp[i - 1] + arr[i]);
        if (max < dp[i]) {
            max = dp[i];
        }
    }
    
    printf("%d\n", max);
    return 0;
}