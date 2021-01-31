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

    scanf("%d", &n);
    max = 1;//요소가 하나라도 있으니 길이는 무조건 1 이상
    arr[0] = 0;
    memo[0] = 0;//[0]은 0으로 초기화

    for (i = 1; i <= n; ++i) {
        scanf("%d", &arr[i]);
        memo[i] = 1;//수열 길이는 1부터 시작하니 [1]부터 1로 초기화

        for (j = 1; j < i; ++j) {
            if (arr[j] < arr[i]) {
                memo[i] = my_max(memo[i], memo[j] + 1);
            }//[1]부터 돌면서 현재 [i]의 값과 비교해 제일 큰 값을 선택

            if (max < memo[i]) {
                max = memo[i];
            }//바로 그게 제일 긴 수열 길이
        }
    }

    printf("%d\n", max);

    return 0;
}

/*
    int n, i, j, max;
    int arr[1001];
    int memo[1001] = { 0, };

    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        for (j = 0; j < i; ++j) {
            if (arr[j] < arr[i]) {
                memo[i]++;
            }
        }
    }

    max = 0;
    for (i = 0; i < n; ++i) {
        if (max < memo[i]) {
            max = memo[i];
        }
    }
    printf("%d\n", max + 1);
https://jason9319.tistory.com/113
https://12bme.tistory.com/120
https://blockdmask.tistory.com/168
*/