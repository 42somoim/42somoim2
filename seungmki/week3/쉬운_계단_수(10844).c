#include <stdio.h>

int main(void)
{
    int n, answer, i, j;
    int memo[101][11];/*앞은 1~100, 뒤는 0~9*/
    scanf("%d", &n);

    memo[1][0] = 0;
    for (i = 1; i <= 9; ++i) {
        memo[1][i] = 1;/*n이 1일 때*/
    }

    for (i = 2; i <= n; ++i) {
        memo[i][0] = memo[i - 1][1];/*0으로 끝날 땐 항상 앞자리수는 1뿐*/
        for (j = 1; j < 9; ++j) {
            memo[i][j] = (memo[i - 1][j - 1] + memo[i - 1][j + 1]) % 1000000000;
        }/*맨 뒷자리 = 바로 앞자리*/
        memo[i][9] = memo[i - 1][j - 1];
    }

    answer = 0;
    for (i = 0; i < 10; ++i) {
        answer = (answer + memo[n][i]) % 1000000000;
    }
    printf("%d\n", answer);
    return 0;
}
