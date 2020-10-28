#include <stdio.h>

int main(){
	int n, p[1001], dp[1001];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d", &p[i]);
		dp[i] = p[i];
		for (int j = 1; j < i; j++){
			if (dp[i]<(dp[i-j]+p[j]))
				dp[i] = dp[i-j]+p[j];
		}
	}
	printf("%d\n", dp[n]);
	return 0;
}
