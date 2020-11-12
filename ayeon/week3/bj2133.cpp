#include <stdio.h>

int dp[31];

int main(){
	int n;
	scanf("%d", &n);
	dp[0] = 1;
	for (int i = 2; i<=n; i+=2){
		dp[i] = dp[i-2]*3;
		for (int j = 4; j<=i; j+=2)
			dp[i] += dp[i-j]*2;
	}
	printf("%d\n", dp[n]);
	return 0;
}
