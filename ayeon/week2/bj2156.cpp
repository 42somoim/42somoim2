#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))

int wine[10001], dp[10001];

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &wine[i]);
	}
	dp[0] = wine[0];
	dp[1] = wine[0] + wine[1];
	for(int i = 2; i<n; i++){
		// i번째 잔을 마시는 경우
		// i-1번째 잔을 마시는 경우, 안 마시는 경우 중 큰 값으로 선택
		dp[i] = MAX(dp[i-3]+wine[i-1], dp[i-2]) + wine[i];
		// i번째 잔을 마시지 않는 경우
		dp[i] = MAX(dp[i], dp[i-1]);
	}
	printf("%d\n", dp[n-1]);
	return 0;
}
