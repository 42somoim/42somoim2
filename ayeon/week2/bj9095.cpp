#include <stdio.h>

//dp[n] = dp[n-1] + dp[n-2] + dp[n-3]

int dp[11];

int main(){
	int t, n;
	scanf("%d", &t);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i=0; i<t; i++){
		scanf("%d", &n);
		if (!dp[n]){
			for(int j=4; j<=n; j++){
				dp[j] = dp[j-1] + dp[j-2] + dp[j-3];
			}
		}
		printf("%d\n", dp[n]);
	}
	return 0;
}
