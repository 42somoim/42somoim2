#include <stdio.h>

int main(void)
{
    int n, i, j, max;
    int arr[1001];
    int ascent[1001];
    int descent[1001];

    scanf("%d", &n);
    max = 0;

    for (i = 1; i <= n; ++i) {
        scanf("%d", &arr[i]);
        ascent[i] = 1;

        for (j = 1; j < i; ++j) {
            if (arr[j] < arr[i] && ascent[i] < ascent[j] + 1) {
                ascent[i] = ascent[j] + 1;
            }//기본 LIS대로 앞에서부터 증가 순열 길이 기록
        }
    }

    for (i = n; i > 0; --i) {//주어진 배열을 반대로 돌면서 감소하는 순열 길이를 기록
        descent[i] = 1;//순열 길이가 1부터 시작하니까 역시 1로 초기화

        for (j = n; j > i; --j) {
            if (arr[j] < arr[i] && descent[i] < descent[j] + 1) {
                descent[i] = descent[j] + 1;
            }//감소 순열 길이 기록
        }
    }

    for (i = 0; i <= n; ++i) {
        if (max < ascent[i] + descent[i]) {
            max = ascent[i] + descent[i];
        }//증가 순열 길이와 감소 순열 길이 합이 제일 클 때가 제일 긴 바이토닉 수열 길이
    }
    printf("%d\n", max - 1);//바이토닉 수열 길이 구할 때 [i]는 2번 포함되므로 1을 빼줘야 함

    return 0;
}