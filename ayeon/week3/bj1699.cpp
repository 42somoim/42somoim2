#include <stdio.h>

// dp[i] = min(dp[i], dp[i-j*j]+1)

int main(){
	int n, dp[100001];
	scanf("%d", &n);
	for (int i = 1; i<=n; i++){
		dp[i] = i;
		for (int j = 1; j*j<=i; j++){
			if (dp[i-j*j]+1 < dp[i])
				dp[i] = dp[i-j*j]+1;
		}
	}
	printf("%d\n", dp[n]);
	return 0;
}
