#include <stdio.h>

int my_min(int a, int b)
{
    return a <= b ? a : b;
}

int main(void)
{
    int n, i, j;
    int dp[100001];
    
    scanf("%d", &n);//인자 담기
    dp[0] = 0;//제곱근 있는 수 만났을 때 필요. 4-2*2, 9-3*3 같은 상황에서 작동
    
    for (i = 1; i <= n; ++i) {
        dp[i] = i;//1^2으로만 제곱수 합 꾸렸을 때 개수 대입, 최악의 상황인 것
        for (j = 1; j * j <= i; ++j) {
            dp[i] = my_min(dp[i], dp[i - j*j] + 1);
        }//n까지 전부 검사할 필요 없음. n=10이면 3^2 + 1이니 3까지만 검사해도 됨
    }
    
    printf("%d\n", dp[n]);
    return 0;
}
