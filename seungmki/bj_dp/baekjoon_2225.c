#include <stdio.h>

int main(void)
{
    int n, k, i, j, l;
    int dp[201][201];//순서대로 k, n. 각각 범위가 1~200임
  
    scanf("%d %d", &n, &k);
    if (k == 1) {
        printf("1\n");
        return 0;//k=1이면 n이 뭐든 경우의 수는 항상 1이라
    }//early exit로 처리
  
    for (i = 0; i <= n; i++) {
        dp[0][i] = 0;//이번 dp 문제에도 k, n이 0일 때가 쓰임
        dp[1][i] = 1;//k=1이면 n이 뭐든 경우의 수는 항상 1
    }//dp[i][0] = i != 0 ? 1 : 0; 원래 넣었다가 뺌. 이 코드 있으면 중복값 발생해서 경우의 수가 더 크게 나오
    
    for (i = 2; i <= k; ++i) {//위에서 k>=1 경우의 수 구해놨으니 2부터 돌리면 됨
        for (j = 0; j <= n; ++j) { 
            dp[i][j] = j == 0 ? dp[i][j] : 0;//j=0이면 위 반복문 결과 유지하기 위해
            for (l = 0; l <= j; ++l) {
                dp[i][j] = (dp[i][j] + dp[i - 1][l]) % 1000000000;
            }
        }
    }
    printf("%d\n", dp[k][n]);
    return 0;
}
