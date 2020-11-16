#include <stdio.h>

int my_max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int n, i, j, max;
    int arr[1001];
    int memo[1001];
    int value[1001];

    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        scanf("%d", &arr[i]);
        value[i] = arr[i];
    }
    max = arr[1];//항상 1번 색인 값은 수열에 들어가니까, 즉 누적값에 들어가니까

    for (i = 1; i <= n; ++i) {
        memo[i] = 1;//점화식 배열에 현재 색인의 값 그대로 대입

        for (j = 1; j < i; ++j) {
            if (arr[j] < arr[i] && memo[i] < memo[j] + 1) {//수열 조건 되는지 검사
                memo[i] = memo[j] + 1;//수열 추가
                value[i] = my_max(arr[i] + value[j], value[i]);//새로운 수열의 누적값으로 갱신
            }//수열 조건 달성하면 memo[i]의 값에 누적 덧셈

            if (max < value[i]) {
                max = value[i];
            }//누적값 중 가장 큰 게 답
        }
    }

    printf("%d\n", max);
    return 0;
}

/*
int my_max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int n, i, j, max;
    int arr[1001];
    int memo[1001];
    int value[1001];

    scanf("%d", &n);
    max = 1;//수열 크기는 최소 1부터 시작하니 max도 1로 초기화

    for (i = 1; i <= n; ++i) {
        scanf("%d", &arr[i]);
        memo[i] = 1;//점화식 배열에 현재 색인의 값 그대로 대입
        value[i] = arr[i];

        for (j = 1; j < i; ++j) {
            if (arr[j] < arr[i] && memo[i] < memo[j] + 1) {//수열 조건 되는지 검사
                memo[i] = memo[j] + 1;//수열 추가
                value[i] = my_max(arr[i] + value[j], value[i]);//새로운 수열의 누적값으로 갱신
            }//수열 조건 달성하면 memo[i]의 값에 누적 덧셈

            if (max < value[i]) {
                max = value[i];
            }//누적값 중 가장 큰 게 답
        }
    }

    printf("%d\n", n > 1 ? max : arr[1]);
    return 0;
}
*/