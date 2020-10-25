#include <stdio.h>

// dp[i] = dp[i-1] + dp[i-5]

int main(){
	int t, n;
	long long dp[101] = {0, 1, 1, 1, 2, };
	scanf("%d", &t);
	for (int i = 0; i<t; i++){
		scanf("%d", &n);
		for (int j = 5; j<=n; j++)
			dp[j] = dp[j-1] + dp[j-5];
		printf("%lld\n", dp[n]);
	}
	return 0;
}
