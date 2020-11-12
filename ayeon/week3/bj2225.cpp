#include <stdio.h>

// DP[K][N] = DP[K-1][0] + DP[K-1][1] + .... + DP[K-1][N]

// dp[n][k] = k개 더해서 n이 되는 경우의 수
long dp[201][201];

int main(){
	int N, K;
	scanf("%d %d", &N, &K);
	for (int i = 0; i<=N; i++)
		dp[i][1] = 1;
	for (int k = 2; k<=K; k++){
		for (int n = 0; n<=N; n++){
			for (int i = 0; i<=n; i++)
				dp[n][k] += dp[i][k-1];
			dp[n][k] %= 1000000000;
		}
	}
	printf("%ld\n", dp[N][K]);
	return 0;
}
