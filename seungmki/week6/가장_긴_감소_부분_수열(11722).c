#include <stdio.h>

int main(void)
{
    int n, i, j, max;
    int arr[1001];
    int memo[1001];

    scanf("%d", &n);
    max = 1;//수열 길이는 최소 1이니까 1로 초기화

    for (i = 1; i <= n; ++i) {
        scanf("%d", &arr[i]);
        memo[i] = 1;//감소하는 수열 조건 확인하기 전의 모든 수는 수열의 시작점이 될 수 있으니 1을 대입

        for (j = 1; j < i; ++j) {
            if (arr[j] > arr[i] && memo[i] < memo[j] + 1) {//감소하는 수열 조건 되는지 검사
                memo[i] = memo[j] + 1;//조건 되면 현재 색인도 수열에 추가
            }

            if (max < memo[i]) {
                max = memo[i];
            }//감소 수열 길이가 가장 긴 것이 답
        }
    }

    printf("%d\n", max);
    return 0;
}