#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int repeat, n, i, j;
    scanf("%d", &repeat);

    while (repeat-- != 0) {
        int memo[2][100001];//스티커 저장용
        int value[2][100001];//0, 1번째 행의 최대값 저장용
        scanf("%d", &n);

        value[0][0] = 0;
        value[1][0] = 0;
        for (i = 0; i < 2; ++i) {
            for (j = 1; j <= n; ++j) {
                scanf("%d", &memo[i][j]);//배열에 스티커 점수 저장
            }
        }

        value[0][1] = memo[0][1];//0번째 행렬의 1번째 값 넣음
        value[1][1] = memo[1][1];//1번째 행렬의 1번째 값 넣음
        for (i = 2; i <= n; ++i) {
            value[0][i] = max(value[1][i - 1], value[1][i - 2]) + memo[0][i];
            value[1][i] = max(value[0][i - 1], value[0][i - 2]) + memo[1][i];
        }//대각선 이동이라서 0번째 행은 1번째 행, 1번째 행은 0번째 행의 값을 현재 자기 위치의 값으로 삼음

        printf("%d\n", max(value[0][n], value[1][n]));
    }//이 반복문이 여러 번 돌 수 있으니 memo, value 배열의 초기화에 신경써야 함
    
    return 0;
}