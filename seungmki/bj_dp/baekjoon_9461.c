#include <stdio.h>

int main(void)
{
    int count, n, i;
    unsigned long long dp[101];//문제에서 제시한 파도반 수열 길이는 1~100이니까
    dp[0] = 0;//이번 DP 알고리듬에서도 [0] 쓰인다
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;//[1]~[4]까지는 기본 요소라서 미리 써준다고 생각하자
  
    scanf("%d", &count);//몇 번 테스트할지 기록
    for (i = 5; i <= 100; ++i) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }//규칙에 따라 점화식 채움
  
    for (i = 1; i <= count; ++i) {
        scanf("%d", &n);
        printf("%llu\n", dp[n]);
    }
    return 0;
}
