#include <stdio.h>

int max(int a, int b)
{
    return a >= b ? a : b;
}

int main(void)
{
    int n, i, j;
    int arr[301];
    int dp[301];
    
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        scanf("%d", &arr[i]);
    }//우선 인자들 담아놓기
    
    dp[0] = 0;//n이 3 이상일 때 필요
    dp[1] = arr[1];
    if (n >= 2)//n이 1일 수도 있으니까
        dp[2] = arr[1] + arr[2];
    for (i = 3; i <= n; ++i) {//계단이 3개 이상일 때부터 점화식으로 비교하며 기록
        dp[i] = max(arr[i] + arr[i - 1] + dp[i - 3], arr[i] + dp[i - 2]);
    }
    
    printf("%d\n", dp[n]);
    return 0;
}