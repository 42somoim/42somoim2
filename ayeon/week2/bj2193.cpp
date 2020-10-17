#include <stdio.h>

//피보나치 수열
//dp[n] = dp[n-1] + dp[n-2]

long long dp[91];

int main(){
	int n;
	scanf("%d", &n);
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i<=n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	printf("%lld\n", dp[n]);
	return 0;
}


// #include <stdio.h>

// //dp[n][0] = dp[n-1][0] + dp[n-1][1];
// //dp[n][1] = dp[n-1][0];

// long long dp[91][2];

// int main(){
// 	int n;
// 	scanf("%d", &n);
// 	dp[1][0] = 0;
// 	dp[1][1] = 1;
// 	for (int i = 2; i<=n; i++){
// 		dp[i][0] = dp[i-1][0] + dp[i-1][1];
// 		dp[i][1] = dp[i-1][0];
// 	}
// 	printf("%lld\n", dp[n][0]+dp[n][1]);
// 	return 0;
// }
