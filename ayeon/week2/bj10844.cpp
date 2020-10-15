#include <stdio.h>

//l = 0 -> dp[n][l] = dp[n-1][l+1] = dp[n-1][1]
//l = 1~8 -> dp[n][l] = dp[n-1][l-1] + dp[n-1][l+1]
//l = 9 -> dp[n][l] = dp[n-1][l-1] = dp[n-1][8]

int dp[101][10];

int main(){
	int n, res = 0;
	scanf("%d", &n);
	dp[1][0] = 0;
	for (int i = 1; i<=9; i++){
		dp[1][i] = 1;
	}
	for (int i = 2; i<=n; i++){
		for (int j = 0; j<=9; j++){
			if (j == 0)	dp[i][j] = dp[i-1][1] % 1000000000;
			else if (j == 9)	dp[i][j] = dp[i-1][8] % 1000000000;
			else	dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % 1000000000;
		}
	}
	for (int i = 0; i<10; i++){
		res = (res + dp[n][i]) % 1000000000;
	}
	printf("%d\n", res);
	return 0;
}
