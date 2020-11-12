// 10844
#include<iostream>

using namespace std;

int main(void) {
	int n, i, j;
	int dp[1001][10];
	int ans, sum;

	cin >> n;
	ans = 0;
	dp[1][0] = 0;
	for (i = 1; i < 10; i++)
		dp[1][i] = 1;
	for (i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][1] % 1000000000;
		dp[i][9] = dp[i - 1][8] % 1000000000;
		for (j = 1; j < 9; j++) 
			dp[i][j] = (dp[i - 1][j + 1] + dp[i - 1][j - 1]) % 1000000000;
	}
	for (i = 0; i < 10; i++)
		ans = (ans + dp[n][i]) % 1000000000;
	cout << ans << "\n";
}
